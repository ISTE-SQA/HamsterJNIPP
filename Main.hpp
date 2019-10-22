#ifndef Main_hpp
#define Main_hpp

#include <iostream>
#include <string>
#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/HamsterGameProxy.h"
#include "de/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/LocationProxy.h"
#include "de/unistuttgart/iste/rss/oo/hamstersimulator/datatypes/DirectionProxy.h"
#include "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/HamsterProxy.h"
#include "de/unistuttgart/iste/rss/oo/hamstersimulator/external/model/TerritoryProxy.h"
#include "de\unistuttgart\iste\rss\oo\hamstersimulator\internal\model\InputInterfaceProxy.h"
#include "net/sourceforge/jnipp/JVM.h"
#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "net/sourceforge/jnipp/BaseException.h"

std::string fxClassName = "de/unistuttgart/iste/rss/oo/hamstersimulator/ui/javafx/JavaFXUI";

using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::external::model;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model;

using namespace net::sourceforge::jnipp;
using namespace std;

__declspec(dllexport) typedef struct {
    HamsterProxy *referencedHamster;
} HamsterSpec;

__declspec(dllexport) void init();
__declspec(dllexport) void init(const char* filename);
__declspec(dllexport) HamsterSpec addHamster(int row, int column, int direction, int grainCount);
__declspec(dllexport) void releaseHamster(HamsterSpec hamster);
__declspec(dllexport) void deinit();
__declspec(dllexport) void move();
__declspec(dllexport) void move(HamsterSpec hamster);
__declspec(dllexport) void turnLeft();
__declspec(dllexport) void turnLeft(HamsterSpec hamster);
__declspec(dllexport) void pickGrain();
__declspec(dllexport) void pickGrain(HamsterSpec hamster);
__declspec(dllexport) void putGrain();
__declspec(dllexport) void putGrain(HamsterSpec hamster);
__declspec(dllexport) int getColumn();
__declspec(dllexport) int getRow();
__declspec(dllexport) bool frontIsClear();
__declspec(dllexport) bool frontIsClear(HamsterSpec hamster);
__declspec(dllexport) bool mouthEmpty();
__declspec(dllexport) bool mouthEmpty(HamsterSpec hamster);
__declspec(dllexport) bool grainAvailable();
__declspec(dllexport) bool grainAvailable(HamsterSpec hamster);
__declspec(dllexport) void readString(const char* message, char* result);
__declspec(dllexport) void readString(HamsterSpec hamster, const char* message, char* result);
__declspec(dllexport) int readNumber(const char* message);
__declspec(dllexport) int readNumber(HamsterSpec hamster, const char* message);
__declspec(dllexport) void write(const char* message);
__declspec(dllexport) void write(HamsterSpec hamster, const char* message);
__declspec(dllexport) void writef(const char* format, ... );
__declspec(dllexport) void writef(HamsterSpec hamster, const char* format, ... );
__declspec(dllexport) HamsterGameProxy* hamsterGame;
__declspec(dllexport) HamsterProxy* paule;


void setupHamsterGame(const char* filename);
#endif