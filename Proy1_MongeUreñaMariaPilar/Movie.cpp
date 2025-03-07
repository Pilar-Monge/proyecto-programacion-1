#include "Movie.h"

Movie::Movie() {
	name = "None";
	year = 0;
	duration = 0.00;
	country = "None";
	synopsis = "None";
	isMovieBeingShown = false;
}

Movie::Movie(string aName, int aYear, int aDuration, string aCountry, string aSynopsis, bool aValue) {
	name = aName;
	year = aYear;
	duration = aDuration;
	country = aCountry;
	synopsis = aSynopsis;
	isMovieBeingShown = aValue;
		
}

Movie::~Movie()
{
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

void Movie::setDuration(int aDuration) {
	duration = aDuration;
}

int Movie::getDuration() {
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

string Movie::getSynopsis() {
	return synopsis;
}

void Movie::setIsMovieBeingShown(bool aValue)
{
	isMovieBeingShown = aValue;
}

bool Movie::getIsMovieBeingShown()
{
	return isMovieBeingShown;
}



void Movie::askInformation(){
	printf("\n\tPor favor, introducir la informacion de la pelicula.\n");
	cin.ignore();
	printf("\tNombre: ");
	getline(cin, name);

	printf("\n\tAnio de creacion: ");
	scanf_s("%d",&year);

	printf("\n\tDuracion de la pelicula en minutos: ");
	scanf_s("%d",&duration);

	cin.ignore();
	printf("\n\tPais: ");
	getline(cin, country);

	cin.ignore();
	printf("\n\tSinopsis de la pelicula: ");
	getline(cin, synopsis);

}

void Movie::showInformationMovie() {


	printf("\tNombre: %s\n", name.c_str());
	printf("\tAnio de creacion: %d\n", year);
	printf("\tDuracion de la pelicula: %d min\n", duration);
	printf("\tPais: %s\n", country.c_str());
	printf("\tSinopsis de la pelicula: %s\n", synopsis.c_str());



}


