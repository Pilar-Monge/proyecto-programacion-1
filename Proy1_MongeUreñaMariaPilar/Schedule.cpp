#include "Schedule.h"


Schedule::Schedule()
{
	startingMinutes = 0;
	startingHour = 0;
	endHour = 0;
	endMinutes = 0;
	date = " ";
	positionMovie = 0;
	positionRoom = 0;
}

Schedule::Schedule(int aStartingHour, int aStartingMinutes, int anEndHour, int anEndMinutes, string aDate, int aPositionMovie, int aPositionRoom)
{
	startingHour = aStartingHour;
	startingMinutes = aStartingMinutes;
	endHour = anEndHour;
	endMinutes = anEndMinutes;
	date = aDate;
	positionMovie = aPositionMovie;
	positionRoom = aPositionRoom;
}

Schedule::~Schedule()
{
}

void Schedule::setStartingHour(int aStartingHour)
{
	startingHour = aStartingHour;
}

int Schedule::getStartingHour()
{
	return startingHour;
}

void Schedule::setStartingMinutes(int aStartingMinutes)
{
	startingMinutes = aStartingMinutes;
}

int Schedule::getStartingMinutes()
{
	return startingMinutes;
}

void Schedule::setEndHour(int anEndHour)
{
	endHour = anEndHour;
}

int Schedule::getEndHour()
{
	return endHour;
}

void Schedule::setEndMinutes(int anEndMinutes)
{
	endMinutes = anEndMinutes;
}

int Schedule::getEndMinutes()
{
	return endMinutes;
}

void Schedule::setDate(string aDate)
{
	date = aDate;
}

string Schedule::getDate()
{
	return date;
}

void Schedule::setPositionMovie(int aPositionMovie)
{
	positionMovie = aPositionMovie;
}

int Schedule::getPositionMovie()
{
	return positionMovie;
}

void Schedule::setPositionRoom(int aPositionRoom)
{
	positionRoom = aPositionRoom;
}

int Schedule::getPositionRoom()
{
	return positionRoom;
}

void Schedule::askInformationToCreateSchedule(int* vector, int position)
{
	printf("\n\tPor favor, introducir la informacion del horario.\n");
	
	printf("Hora inicial en hora militar: ");
	scanf_s("%d", &startingHour);
	
	printf("\nMinuto en el que inicia: ");
	scanf_s("%d", &startingMinutes);
	
	calculateTimeMovieEnds(vector[position]);
		
	printf("\nLa pelicula termina a las:%d:%d ",endHour,endMinutes);
	cin.ignore();
	
	printf("\nFecha de la pelicula ingresarla en formayo DD/MM/AAAA(): ");
	getline(cin, date);
}

void Schedule::calculateTimeMovieEnds(int aDuration)
{
	endHour = startingHour;
	int duration = 0;
		
	duration= aDuration+startingMinutes;
	while (duration >= 60) {
		duration-=60;
		endHour++;
	}
	endMinutes = duration;
}

void Schedule::showInformationSchedule()
{
	printf("\nFecha de la pelicula: %s ",date.c_str());
	printf("\nHora inicial: %d:%d \n",startingHour,startingMinutes);
	printf("\nLa pelicula termina a las: %d:%d ", endHour, endMinutes);
	
}




