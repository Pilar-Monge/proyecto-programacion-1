#pragma once
#include "Movie.h"
#include <string.h>
#include <windows.h>

class Cinema
{
	private:
		int amountOfMovies;
		int amountOfRooms;
		char  userOption;
		Movie* movies; //Vector de Peliculas
	//	Room* rooms; Vector de salas

	public:
		Cinema();
	    Cinema(int anAmountOfMovies,int anAmountOfRooms);

		void setAmountOfMovies(int anAmountOfMovies);
		int  getAmountOfMovies();

		void setAmountOfRoomes(int anAmountOfRooms);
		int getAmountOfRooms();

		/*void setSynopsis(string aSynopsis);
		string getSynopsis();poner para el vector peliculas y salas
		*/

		void showUserMenu();

		void showUserOption(char userOption);

		void showLines();

};

