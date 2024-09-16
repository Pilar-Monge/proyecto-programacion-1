#include "Room.h"

Room::Room()
{
	numberOfRoom = 0;
	rows = 0;
	amountOfSeatsPerRows = 0;

}

Room::Room(int aNumberOfRoom, int aRows, int anAmountOfSeatsPerRows)
{
	numberOfRoom = aNumberOfRoom;
	rows = aRows;
	amountOfSeatsPerRows = anAmountOfSeatsPerRows;

}

Room::~Room()
{
}

void Room::setNumberOfRoom(int aNumberOfRoom)
{
	numberOfRoom = aNumberOfRoom;
}

int Room::getNumberOfRoom()
{
	return numberOfRoom;
}

void Room::setRows(int aRows)
{
	rows = aRows;
}

int Room::getRows()
{
	return rows;
}

void Room::setAmountOfSeatsPerRows(int anAmountOfSeatsPerRows)
{
	amountOfSeatsPerRows = anAmountOfSeatsPerRows;
}

int Room::getAmountOfSeatsPerRows()
{
	return amountOfSeatsPerRows;
}
