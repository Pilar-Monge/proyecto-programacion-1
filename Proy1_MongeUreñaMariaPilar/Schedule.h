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

public:
	Schedule();
	Schedule(float aStartingHour, int aStartingMinutes, int anEndHour,int anEndMinutes, string aDate);
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

	void askInformationToCreateSchedule(int *vector, int position);
	void calculateTimeMovieEnds(int aDuration);
	void showInformationSchedule();

};

