#pragma once
#include "Movie.h"
#include "Room.h"
#include <string.h>
#include <windows.h>

class Cinema
{
	private:
		int amountOfMovies;
		int amountOfRooms;
		char  userOption;
		Movie* movies; 
		Room* rooms; 

	public:
		Cinema();
		Cinema(int anAmountOfMovies, int anAmountOfRooms, char  anUserOption, Movie* aMovies, Room* aRooms);
		~Cinema();

		void setAmountOfMovies(int anAmountOfMovies);
		int  getAmountOfMovies();

		void setAmountOfRoomes(int anAmountOfRooms);
		int getAmountOfRooms();
		Movie* getMovies();
		Room* getRooms();
	
		
		void showUserMenu();
		void showUserOption(char userOption);
		void showLines();
		void showFirstOptionMenu();
		void showSecondOptionMenu();
		void fillArrayOfMovies();
		void fillArrayOfRooms();
		void showCinemaBillboard();

		void fillInformationschedules();
		void fillVectorOfMoviesTime(int* vector, int size, int numberOfRoom);

		void makeReservation();
		void showThirdOptionMenu();
		void showSchedule(int aPositionMovie);

};

