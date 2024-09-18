#pragma once
#include <iostream>
#include <string> 
#include <cstdio>
#include <stdio.h>
using namespace std;

class Movie {

private:
	string name;
	int year;
	int duration;
	string country;
	string synopsis;
	bool isMovieBeingShown;

public:
	Movie();
	Movie(string aName, int aYear, int aDuration, string aCountry, string aSynopsis, bool aValue);
	~Movie();
	void setName(string aName);
	string  getName();
	void setYear(int aYear);
	int  getYear();
	void setDuration(int aDuration);
	int getDuration();
	void setCountry(string aCountry);
	string getCountry();
	void setSynopsis( string aSynopsis);
	string getSynopsis( );

	void setIsMovieBeingShown(bool aValue);
	bool getIsMovieBeingShown();
	
	void askInformation();
	void showInformationMovie();


};