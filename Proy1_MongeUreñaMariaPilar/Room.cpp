#include "Room.h"

Room::Room()
{
	numberOfRoom = 0;
	rows = 0;
	amountOfSeatsPerRows = 0;
	seatPrice = 0.00;
	amountOfSchedules = 0;
	schedules[amountOfSchedules];
}

Room::Room(int aNumberOfRoom, int aRows, int anAmountOfSeatsPerRows, float aSeatPrice, Schedule* aSchedules, int anAmountOfSchedules,int anAmountSeats )
{
	numberOfRoom = aNumberOfRoom;
	rows = aRows;
	amountOfSeatsPerRows = anAmountOfSeatsPerRows;
	seatPrice = aSeatPrice;
	amountOfSchedules = anAmountOfSchedules;
	amountSeats = anAmountSeats;
	schedules[amountOfSchedules]=aSchedules[anAmountOfSchedules];
}

Room::~Room()
{
	delete[]schedules;
}

void Room::setNumberOfRoom(int aNumberOfRoom)
{
	numberOfRoom = aNumberOfRoom;
}

int Room::getNumberOfRoom()
{
	return numberOfRoom;
}

void Room::setRows(int aRows)
{
	rows = aRows;
}

int Room::getRows()
{
	return rows;
}

int Room::getAmountOfSchedules()
{
	return amountOfSchedules;
}

void Room::setAmountOfSchedules(int anAmountOfSchedules)
{
	amountOfSchedules = anAmountOfSchedules;
}

int Room::getAmountSeats()
{
	return amountSeats;
}

void Room::setAmountSeats(int anAmountSeats)
{
	amountSeats = anAmountSeats;
}

void Room::setAmountOfSeatsPerRows(int anAmountOfSeatsPerRows)
{
	amountOfSeatsPerRows = anAmountOfSeatsPerRows;
}

int Room::getAmountOfSeatsPerRows()
{
	return amountOfSeatsPerRows;
}

void Room::setSeatPrice(float aSeatPrice)
{
	seatPrice = aSeatPrice;
}

float Room::getSeatPrice()
{
	return seatPrice;
}

Schedule* Room::getSchedules()
{
	return schedules;
}

void Room::setSchedules(Schedule* aSchedules, int size)
{
	aSchedules = new Schedule[size];
	for (int i = 0; i < size; ++i)
		aSchedules[i] = schedules[i];
	delete[] schedules;
	amountOfSchedules = size;
	schedules = aSchedules;

}

void Room::askInformationToCreateRoom(int aNumberOfRoom)
{
	numberOfRoom = aNumberOfRoom;
	printf("\n\tPor favor, introducir la informacion de la sala %d\n",aNumberOfRoom);

	printf("\n\tCantidad de filas que tiene la sala: ");
	scanf_s("%d", &rows);

	printf("\n\tCantidad de asientos que hay por fila: ");
	scanf_s("%d", &amountOfSeatsPerRows);

	printf("\n\tIngrese el precio de la butaca: ");
	scanf_s("%f", &seatPrice);

	
}

void Room::fillArrayOfSchedules(int* vector, int size)
{
	schedules = new Schedule[size];
	printf("\n Por favor ingrese la informacion solicitada.\n ");

	for (int i = 0; i < amountOfSchedules; i++) {
		int time = 0;
		printf("\n\t Horario %d \n", i + 1);
		
		schedules[i].askInformationToCreateSchedule(vector, i);

		system("pause");
		system("cls");
	}

}



