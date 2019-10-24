/** @file Main.cpp
 * \brief Main public API of the Hamster simulator.
 */
#include <stdarg.h>
#include <stdio.h>
#include "Main.hpp"

using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::external::model;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::datatypes;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model;

using namespace net::sourceforge::jnipp;
using namespace std;

/** \brief Initializes the Hamster Simulator, sets up a default territory, and places Paule in it.
 *
 *  This function initalizes the hamster game, sets up a default territory, and places Paule in it.
 *  The function is useful for early exercises. In addition the UI of the Hamster Simulator is started and
 *  displayed. After init has executed, you are ready to issue Hamster commands or queries.
 */
void init() {
	try
	{
		JVM::load();

		setupHamsterGame("/territories/example01.ter");

		TerritoryProxy territory = hamsterGame->getTerritory();
		paule = new HamsterProxy();
		*paule = territory.getDefaultHamster();

		hamsterGame->startGame(false);
	}
	catch(BaseException& ex)
	{
		cerr << "caught exception: " << ex.getMessage().c_str() << endl;
		exit(-1);
	}
}

HamsterSpec addHamster(int row, int column, int direction, int grainCount) {
	const char *directions[] = {"WEST","NORTH","EAST","SOUTH"};
	HamsterProxy *newHamster = new HamsterProxy();
	newHamster->init(hamsterGame->getTerritory(), LocationProxy::from(row, column), DirectionProxy::valueOf(directions[direction]), grainCount);
	HamsterSpec result;
	result.referencedHamster = newHamster;

	return result;
}

void releaseHamster(HamsterSpec hamster) {
	if (hamsterGame) {
		delete hamster.referencedHamster;
	}
	hamster.referencedHamster = nullptr;
}

/** \brief Initializes the Hamster Simulator, sets up the provided territory, and places Paule in it.
 *
 *  This function initalizes the hamster game, sets up the provided territory, and places Paule in it.
 *  The function is useful for early exercises. In addition the UI of the Hamster Simulator is started and
 *  displayed. After init has executed, you are ready to issue Hamster commands or queries.
 */
void init(const char* filename) {
	try
	{
		JVM::load();

		setupHamsterGame(filename);

		TerritoryProxy territory = hamsterGame->getTerritory();
		paule = new HamsterProxy();
		*paule = territory.getDefaultHamster();

		hamsterGame->startGame(false);
	}
	catch(BaseException& ex)
	{
		cerr << "caught exception: " << ex.getMessage().c_str() << endl;
		exit(-1);
	}
}

/// @private
void setupHamsterGame(const char* filename) {
	hamsterGame = new HamsterGameProxy();
	hamsterGame->initialize(filename);

	jclass fxClass = JNIEnvHelper::FindClass(fxClassName.c_str());
	jmethodID jfxStart = JNIEnvHelper::GetStaticMethodID(fxClass , "start", "()V" );
	jmethodID jfxIf = JNIEnvHelper::GetStaticMethodID(fxClass , "getJavaFXInputInterface", "()Lde/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/InputInterface;" );
	JNIEnvHelper::CallStaticVoidMethod(fxClass, jfxStart);
	jobject fxIf = JNIEnvHelper::CallStaticObjectMethod(fxClass, jfxIf);

	hamsterGame->displayInNewGameWindow();
	InputInterfaceProxy proxyIf(fxIf);
	hamsterGame->setInputInterface(proxyIf);
}

/** \brief Shuts down the hamster game and terminates the hamster simulator core
*
* This function stops the running hamster game and shuts down the core hamster simulator engine.
* The UI stays active and the game history can still be tracked.
*/
void deinit() {
	try
	{
		hamsterGame->stopGame();
		delete paule;
		delete hamsterGame;
		paule = nullptr;
		hamsterGame = nullptr;
		JVM::unload();
	}
	catch(BaseException& ex)
	{
		cerr << "caught exception: " << ex.getMessage().c_str() << endl;
		exit(-1);
	}
}

/** \brief Moves the hamster a single steps towards its looking direction
*
* This function moves the hamster a single tile forward in its looking direction. The move
* is only allowed if the tile in front of the hamster exists (i.e., the hamster is not allowed
* to leave the gamefield) and it is not blocked by a wall. An attempt to make the move
* nevertheless results in an exception.
*/
void move() {
	paule->move();
}

void move(HamsterSpec hamster) {
	hamster.referencedHamster->move();
}

/** \brief Rotates the hamster by 90 degrees counterclockwise.
*
* This function changes the hamster's looking direction by rotating the hamster 90 degrees counterclockwise.
*/
void turnLeft() {
	paule->turnLeft();
}

void turnLeft(HamsterSpec hamster) {
	hamster.referencedHamster->turnLeft();
}

/** \brief Picks up a grain from the hamster's current tile.
*
* This function transfers a grain from the hamster's current tile into the mouth of the hamster. The function
* can only be called if there is a gain on the current tile. If not, the program raises an exception.
*/
void pickGrain() {
	paule->pickGrain();
}

void pickGrain(HamsterSpec hamster) {
	hamster.referencedHamster->pickGrain();
}

/** \brief Puts a grain from the hamster's mouth on the hamster's current tile.
*
* This function transfers a grain from the hamster's mouth to the hamster's current tile. The function
* can only be called if there is a gain in the hamster's mouth. If not, the program raises an exception.
*/
void putGrain() {
	paule->putGrain();
}

void putGrain(HamsterSpec hamster) {
	hamster.referencedHamster->putGrain();
}

/** \brief Reads a number from the user by prompting the user using the provided message
*
* This function asks the user to enter a valid number. The passed message is used as
* message prompt.
* \param message The message used when prompting for the user's input.
* \result A pointer to an integer variable used to store the result.
*/
int readNumber(const char* message) {
	return paule->readNumber(message);
}
int readNumber(HamsterSpec hamster, const char* message) {
	return hamster.referencedHamster->readNumber(message);
}

/** \brief Reads a string from the user by prompting the user using the provided message
*
* This function asks the user to enter a valid message string. The passed message is used as
* message prompt.
* \param message The message used when prompting for the user's input.
* \param result A pointer to a character array used to store the result. The array has to have
*  enough memory allocated to store the provided string.
*/
void readString(const char* message, char* result) {
	string resultS = paule->readString(message);
	strcpy(result, resultS.c_str());
}
void readString(HamsterSpec hamster, const char* message, char* result) {
	string resultS = hamster.referencedHamster->readString(message);
	strcpy(result, resultS.c_str());
}
/** \brief Prints the given message on the hamster's log
*
* This function prints the provided message on the hamster's log.
* \param message The message to print to the log. Is not allowed to be null.
*
*/
void write(const char* message) {
	paule->write(message);
}
void write(HamsterSpec hamster, const char* message) {
	hamster.referencedHamster->write(message);
}

/** \brief Gets the row number of the current hamster position
*
* This function gets the row count of the current hamster position
*/
int getRow() {
	LocationProxy location = paule->getLocation();
	return location.getRow();
}

/** \brief Gets the column number of the current hamster position
*
* This function gets the column count of the current hamster position
*/
int getColumn() {
	LocationProxy location = paule->getLocation();
	return location.getColumn();
}

/** \brief Returns true if the tile in front of the hmaster is clear
*
* \result true if the tile in front of the hamster is clear
*/
bool frontIsClear() {
	return paule->frontIsClear();
}
bool frontIsClear(HamsterSpec hamster) {
	return hamster.referencedHamster->frontIsClear();
}

/** \brief Returns true if the hamster has no grains in its mouth
*
* \result true if the hamster's mouth is empty
*/
bool mouthEmpty() {
	return paule->mouthEmpty();
}
bool mouthEmpty(HamsterSpec hamster) {
	return hamster.referencedHamster->mouthEmpty();
}


/** \brief Returns true if there are grains availabe to pick up on the hamster's current tile
*
* \result true if the hamster's current tile contains at least one grain
*/
bool grainAvailable() {
	return paule->grainAvailable();
}
bool grainAvailable(HamsterSpec hamster) {
	return hamster.referencedHamster->grainAvailable();
}

/** \brief Lets the hamster say a message formated with the same format string used in printf
*
* Lets the hamster say a message formated with the same format string used in printf. The number
* of arguments has to match the number of format placeholders used. It is also not necessary to
* use a newline ('\\n') at the end.
*
* Find the documentation of the printf
* function under http://www.cplusplus.com/reference/cstdio/printf/
*/
void writef(const char* message_template, ... ) {
	char buffer[1000];
	va_list args;
    va_start(args, message_template);
    vsnprintf(buffer, 1000, message_template, args);
	write(buffer);
    va_end(args);
}

void writef(HamsterSpec hamster, const char* message_template, ... ) {
	char buffer[1000];
	va_list args;
    va_start(args, message_template);
    vsnprintf(buffer, 1000, message_template, args);
	write(hamster, buffer);
    va_end(args);
}

bool gameIsActive() {
	return hamsterGame != nullptr;
}