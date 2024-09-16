#pragma once
class Room
{
private:

	int numberOfRoom;
	int rows;
	int amountOfSeatsPerRows;


public:
	Room();
	Room(int aNumberOfRoom,int aRows,int anAmountOfSeatsPerRows);
	~Room();
	void setNumberOfRoom(int aNumberOfRoom);
	int  getNumberOfRoom();
	void setRows(int aRows);
	int  getRows();
	void setAmountOfSeatsPerRows(int anAmountOfSeatsPerRows);
	int getAmountOfSeatsPerRows();

};

