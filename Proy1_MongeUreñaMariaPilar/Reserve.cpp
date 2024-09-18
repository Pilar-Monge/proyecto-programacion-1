#include "Reserve.h"

Reserve::Reserve()
{
	numberConsecutive=0;
	positionMovie=0;
	positionRoom = 0;
	positionSchedule = 0;
	price=0.00;
	amountTicket = 0;
}

Reserve::Reserve(int aNnumberConsecutive, int aPositionMovie, int aPositionRoom, int aPositionSchedule, float aPrice, int anAmountTicket)
{
	numberConsecutive = aNnumberConsecutive;
	positionMovie = aPositionMovie;
	positionRoom = aPositionRoom;
	positionSchedule = aPositionSchedule;
	price = aPrice;
	amountTicket = anAmountTicket;
}

Reserve::~Reserve()
{
}

void Reserve::setNumberConsecutive(int aNnumberConsecutive)
{
	numberConsecutive = aNnumberConsecutive;
}

int Reserve::getNumberConsecutive()
{
	return numberConsecutive;
}

void Reserve::setPositionMovie(int aPositionMovie)
{
	positionMovie = aPositionMovie;
}

int Reserve::getPositionMovie()
{
	return positionMovie;
}

void Reserve::setPositionRoom(int aPositionRoom)
{
	positionRoom = aPositionRoom;
}

int Reserve::getPositionRoom()
{
	return positionRoom;
}

void Reserve::setPositionSchedule(int aPositionSchedule)
{
	positionSchedule = aPositionSchedule;
}

int Reserve::getPositionSchedule()
{
	return positionSchedule;
}

void Reserve::setPrice(float aPrice)
{
	price = aPrice;
}

float Reserve::getPrice()
{
	return price;
}

void Reserve::setAmountTicket(int anAmountTicket)
{
	amountTicket = anAmountTicket;
}

int Reserve::getAmountTicket()
{
	return amountTicket;
}
