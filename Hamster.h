#pragma once
#include "rss-hamster.h"

/** @file */

/** 
* @enum Direction 
* @brief The cardinal directions 
*
* Enumeration of the four different values of the cardinal directions
*/
enum class Direction : int
{
	WEST = 0,  /**< West direction, i.e., hamster looking to the left */
	NORTH = 1, /**< North direction, i.e., hamster looking to the top */
	EAST = 2,  /**< East direction, i.e., hamster looking to the right */
	SOUTH = 3  /**< South direction, i.e., hamster looking to the bottom */
};

//! A location on the hamster territory
/*! Objects of this class can be used to denote locations in the hamster
* territory. They are characterized by their row and colum */
class Location
{
public:
	/*! Constructor of a location. It is initialized by a row and column. 
	* Both row and colum need to be equal or larger than 1 and equal or less
	* than the respecitve size 
	*/
	Location(const int row, const int column)
	{
		this->row = row;
		this->column = column;
	};
	/*! Return the row of this location */
	int getRow() const { return row; };
	/*! Return the column of this location */
	int getColumn() const { return column; };

private:
	int column;
	int row;
};

//! An object representing a hamster on the territory
/*! Objects of this class represent hamsters on the territory. Hamster objects
* have a current location, a current looking direction, and a current number 
* of grains in their mouth.
*/
class Hamster
{
public:
	//! Hamster constructor
	/*! Constructor for a new hamster object. The hamster is placed on the territory 
	* at the given location, looking at the given direction, and with the given number of
	* new grains in its mouth. */
	Hamster(const Location &location, const Direction direction, const int grainCount)
	{
		myHamster = addHamster(location.getRow(), location.getColumn(), static_cast<int>(direction), grainCount);
	};
	//! Hamster destructor
	/*! Destructor of this hamster object. The hamster's ressources are freed up, but the hamster itself
	* will stay on the territory. */
	~Hamster()
	{
		write(myHamster, "Hamster is being released");
		releaseHamster(myHamster);
	};
	//! Let this hamster object make a step towards its looking direction
	void move()
	{
		::move(myHamster);
	};
	//! Let this hamster object do a turn by 90 degrees to the left
	void turnLeft()
	{
		::turnLeft(myHamster);
	};
	//! Let this hamster drop a grain from its mouth
	void putGrain()
	{
		::putGrain(myHamster);
	}
	//! Let this hamster pick up a grain from its current tile
	void pickGrain()
	{
		::pickGrain(myHamster);
	};
	//! Can the hamster make a move? \return true if the hamster is allowed to make a move
	bool frontIsClear() const
	{
		return ::frontIsClear(myHamster);
	};
	//! Is a grain on the current tile? \return true if the current hamster tile has a grain on it
	bool grainAvailable() const
	{
		return ::grainAvailable(myHamster);
	};

private:
	HamsterSpec myHamster;
};
