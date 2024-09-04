#include "Movie.h"

Movie::Movie() {
	name = "None";
	year = 0;
	duration = 0.00;
	country = "None";
	synopsis = "None";
}

Movie::Movie(string aName, int aYear, float aDuration, string aCountry, string aSynopsis) {
	name = aName;
	year = aYear;
	duration = aDuration;
	country = aCountry;
	synopsis = aSynopsis;
}

void Movie:: setName(string aName) {
	name = aName;
}

string Movie:: getName() {
	return name;
}

void Movie::setYear(int aYear) {
	year = aYear;
}

int Movie:: getYear() {
	return year;
}

void Movie::setDuration(float aDuration) {
	duration = aDuration;
}

float Movie::getDuration() {
	return duration;
}

void Movie::setCountry(string aCountry) {
	country = aCountry;
}

string Movie::getCountry() {
	return country;
}

void Movie::setSynopsis(string aSynopsis) {
	synopsis = aSynopsis;
}

string Movie::getSynopsis(int aPosition) {
	return synopsis;
}
void Movie::askInformation(){



}
void Movie ::showInformationMovie() {


}


