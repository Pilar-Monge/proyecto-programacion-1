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
	seats = new char* [rows];
	for (int i = 0; i < rows; i++) {
		seats[i] = new char[columns];
		for (int j = 0; j < columns; j++) {
			seats[i][j] = 'A';
		}
	}
}

Schedule::Schedule(int aStartingHour, int aStartingMinutes, int anEndHour, int anEndMinutes, string aDate, int aPositionMovie, int aPositionRoom, int aRows, int aColumn)
{
	startingHour = aStartingHour;
	startingMinutes = aStartingMinutes;
	endHour = anEndHour;
	endMinutes = anEndMinutes;
	date = aDate;
	positionMovie = aPositionMovie;
	positionRoom = aPositionRoom;
	rows = aRows;
	columns = aColumn;
	seats = new char* [aRows];
	for (int i = 0; i < aRows; i++) {
		seats[i] = new char[aColumn];
		for (int j = 0; j < aColumn; j++) {
			seats[i][j] = 'A';
		}
	}

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

char Schedule::getSeat()
{
	return **seats;
}

void Schedule::setRows(int aRows)
{
	rows = aRows;
}

int Schedule::getRows()
{
	return rows;
}

void Schedule::setColums(int aColumns)
{
	columns = aColumns;
}

int Schedule::getColums()
{
	return columns;
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

	createMatrix();
	
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
	printf("\nSala: %d ", positionRoom+1); 
	printf("\nFecha de la pelicula: %s ",date.c_str());
	printf("\nHora inicial: %d:%d \n",startingHour,startingMinutes);
	printf("\nLa pelicula termina a las: %d:%d ", endHour, endMinutes);
	
}

void Schedule::createMatrix()
{
	seats = new char* [rows];
	for (int i = 0; i < rows; i++) {
		seats[i] = new char[columns];
		for (int j = 0; j < columns; j++) {
			seats[i][j] = 'A';
		}
	}

}




