#pragma once
#include <iostream>
#include <string> 
#include <cstdio>
#include <stdio.h>
#include "Schedule.h"



class Room
{
private:

	int numberOfRoom;
	int rows;
	int amountOfSeatsPerRows;
	float seatPrice; 
	Schedule* schedules;
	int amountOfSchedules;
	int amountSeats;

public:
	Room();
	Room(int aNumberOfRoom,int aRows,int anAmountOfSeatsPerRows,float aSeatPrice, Schedule* aSchedules, int anAmountOfSchedules, int anAmountSeats);
	~Room();
	void setNumberOfRoom(int aNumberOfRoom);
	int  getNumberOfRoom();
	void setRows(int aRows);
	int  getRows();
	int getAmountOfSchedules();
	void setAmountOfSchedules(int anAmountOfSchedules);
	int getAmountSeats();
	void setAmountSeats(int anAmountSeats);
	void setAmountOfSeatsPerRows(int anAmountOfSeatsPerRows);
	int getAmountOfSeatsPerRows();
	void setSeatPrice(float aSeatPrice);
	float getSeatPrice();
	Schedule* getSchedules();
	void setSchedules(Schedule* aSchedules, int size);
	
	void askInformationToCreateRoom(int aNumberOfRoom);
	void fillArrayOfSchedules(int *vector, int size);

};

