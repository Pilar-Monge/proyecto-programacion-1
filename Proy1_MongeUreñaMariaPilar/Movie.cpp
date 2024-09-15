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

string Movie::getSynopsis() {
	return synopsis;
}
void Movie::askInformation(){
	printf("\n\tPor favor, introducir la informacion de la pelicula.\n");
	printf("\tNombre: ");
	cin.ignore();
	getline(cin, name);

	printf("\n\tAnio de creacion: ");
	scanf_s("%d",&year);

	printf("\n\tDuracion de la pelicula en minutos: ");
	scanf_s("%f",&duration);

	printf("\n\tPais: ");
	cin.ignore();
	getline(cin, country);
	
	printf("\n\tSinopsis de la pelicula: ");
	cin.ignore();
	getline(cin, synopsis);

}
void Movie ::showInformationMovie() {
	
	printf("\n\tInformacion de la pelicula:\n");
	printf("\tNombre: %s\n", name.c_str());
	printf("\tAnio de creacion: %d\n", year);
	printf("\tDuracion de la pelicula: %.2f min\n", duration);
	printf("\tPais: %s\n", country.c_str());
	printf("\tSinopsis de la pelicula: %s\n", synopsis.c_str());

}


