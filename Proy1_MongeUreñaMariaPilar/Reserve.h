#pragma once
class Reserve
{

private:
	int numberConsecutive ;
	int positionMovie;
	int positionRoom;
	int positionSchedule;
	float price;
	int amountTicket;
	

public:
	Reserve();
	Reserve(int aNnumberConsecutive, int aPositionMovie, int aPositionRoom, int aPositionSchedule, float aPrice, int anAmountTicket);
	~Reserve();

	void setNumberConsecutive(int aNnumberConsecutive) ;
	int getNumberConsecutive();

	void setPositionMovie(int aPositionMovie);
	int getPositionMovie();

	void setPositionRoom(int aPositionRoom);
	int getPositionRoom();

	void setPositionSchedule(int aPositionSchedule);
	int getPositionSchedule();

	void setPrice(float aPrice);
	float getPrice();
	void setAmountTicket(int anAmountTicket);
		
	int getAmountTicket();


};

