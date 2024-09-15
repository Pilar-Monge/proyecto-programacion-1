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
	float duration;
	string country;
	string synopsis;

public:
	Movie();
	Movie(string aName, int aYear, float aDuration, string aCountry, string aSynopsis);
	~Movie();
	void setName(string aName);
	string  getName();
	void setYear(int aYear);
	int  getYear();
	void setDuration(float aDuration);
	float getDuration();
	void setCountry(string aCountry);
	string getCountry();
	void setSynopsis( string aSynopsis);
	string getSynopsis( );
	void askInformation();
	void showInformationMovie();


};