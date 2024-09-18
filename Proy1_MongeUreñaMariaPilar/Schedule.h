#pragma once
#include <iostream>
#include <string> 
#include <cstdio>
#include <stdio.h>

using namespace std;

class Schedule
{

private:

	int startingHour;
	int startingMinutes;
	int endHour;
	int endMinutes;
	string date; 
	int positionMovie;
	int positionRoom;
	char** seats;
	int rows;
	int columns;


public:
	Schedule();
	Schedule(int aStartingHour, int aStartingMinutes, int anEndHour,int anEndMinutes, string aDate, int aPositionMovie, int aPositionRoom, int aRows, int aColumn);
	~Schedule();

	void setStartingHour(int aStartingTime);
	int  getStartingHour();

	void setStartingMinutes(int aStartingMinutes);
	int  getStartingMinutes();
	void setEndHour(int anEndHour);
	int  getEndHour();
	void setEndMinutes(int anEndMinutes);
	int  getEndMinutes();
	void setDate(string aDate);
	string getDate();

	char  getSeat();

	void setRows(int aRows);
	int  getRows();

	void setColums(int aColumns);
	int getColums();

	void setPositionMovie(int aPositionMovie);
	int  getPositionMovie();
	void setPositionRoom(int aPositionRoom);
	int  getPositionRoom();

	void askInformationToCreateSchedule(int *vector, int position);
	void calculateTimeMovieEnds(int aDuration);
	void showInformationSchedule();

	void createMatrix();

};

