
#include "Cinema.h"

Cinema::Cinema(){
	amountOfMovies = 0;
	amountOfRooms = 0;
	userOption = NULL;
	movies[amountOfMovies];
	rooms[amountOfRooms];
}

Cinema::Cinema(int anAmountOfMovies, int anAmountOfRooms,char  anUserOption, Movie* aMovies, Room* aRooms){
	amountOfMovies = anAmountOfMovies;
	amountOfRooms = anAmountOfRooms;
	userOption = anUserOption;
	movies[amountOfMovies]=aMovies[anAmountOfMovies];
	rooms[amountOfRooms]=aRooms[anAmountOfMovies];
}

Cinema::~Cinema()
{
	delete[] movies;
	delete[] rooms;
}

void Cinema::setAmountOfMovies(int anAmountOfMovies){
	amountOfMovies = anAmountOfMovies;
}

int Cinema::getAmountOfMovies(){
	return amountOfMovies;
}

void Cinema ::setAmountOfRoomes(int anAmountOfRooms){
	amountOfRooms = anAmountOfRooms;
}

int Cinema::getAmountOfRooms(){
	return amountOfRooms;
}

Movie* Cinema::getMovies()
{
	return movies;
}

Room* Cinema::getRooms()
{
	return rooms;
}

void Cinema::showLines(){

	printf("\033[0;32m ");
	printf("\n ------------------------------------  \n");
	printf("\033[0m");
}

void Cinema::showFirstOptionMenu() {
	string option = "";
	printf("\n\t Digite la opcion que quiere: ");
	cin>>option;

	if (option == "i") {
		system("cls");
		showLines();
		printf("\n Esto fue hecho con lagrimas de Pilar Monge.");
		printf("\n O mejor conocina como 3.14lar");
		showLines();
		system("pause");
		system("cls");
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();

	}
	else if (option == "ii") {
		showLines();
		printf("\n Saliendo del programa... ");
		showLines();
		exit(0);
	}
	system("cls");
	printf("\n\t Esta de nuevo en el menu principal: ");
	printf("\n\n\t La opcion que digito es erronea, digitela nuevamente... \n\n");
	showUserMenu();

}

void Cinema::fillArrayOfMovies()
{
	printf("\n Cuantas peliculas quiere ingresar: ");
	scanf_s("%d", &amountOfMovies);
	
	movies = new Movie[amountOfMovies];

	printf("\n Por favor ingrese la informacion solicitada.\n ");
	showLines();
	for (int i = 0; i < amountOfMovies; i++) {

		printf("\n\t Pelicula %d \n",i+1);
	
		movies[i].askInformation();
		
		system("pause");
		system("cls");
	}

}

void Cinema::fillArrayOfRooms()
{
	printf("\n Cuantas salas quiere ingresar: ");
	scanf_s("%d", &amountOfRooms);

	rooms = new Room[amountOfRooms];

	printf("\n Por favor ingrese la informacion solicitada.\n ");
	showLines();
	for (int i = 0; i < amountOfRooms; i++) {
		
		printf("\n\t Sala de Cine %d \n", i + 1);
		
		rooms[i].askInformationToCreateRoom(i+1);
		showLines();
		system("pause");
		system("cls");
	}

}

void Cinema::showCinemaBillboard()
{
	if (amountOfMovies == 0) {
		system("cls");
		showLines();
		printf("No hay películas para mostrar.\n Inserte las peliculas primero.");
		printf("Debe ingresar a la opcion de matenimiento y luego a la opcion de peliculas.");
		system("pause");
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	system("cls");
	showLines();
	printf("\n\tLas peliculas que estan en cartelera son: \n");
	showLines();
	for (int i = 0; i < amountOfMovies; i++) {
		showLines();
		printf("\n\tInformacion de la pelicula: %d\n",i+1);
		movies[i].showInformationMovie();
		showLines();
	}
	system("pause");
}

void Cinema::fillInformationschedules()
{
	if (amountOfRooms == 0) {
		printf("\n Tiene que ingresar las salas primero para poder crear los horarios respectivos.\n ");
		system("pause");
		system("cls");
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	for (int i = 0; i < amountOfRooms; i++) {
		int size = 0;
		int* vectorTime = NULL;
		printf("\n Cuantos horarios quiere ingresar para la sala %d: ",i+1);
		scanf_s("%d", &size);

		rooms[i].setAmountOfSchedules(size);
		if (size != 0) {
			vectorTime = new int[size];
			fillVectorOfMoviesTime(vectorTime, size, i);
			rooms[i].fillArrayOfSchedules(vectorTime, size);

		}
		system("pause");
		system("cls");

	}
}

void Cinema::fillVectorOfMoviesTime(int* vector, int size,int numberOfRoom)
{
	int rows = 0, columns = 0;
	for (int i = 0; i < size; i++) {
		int option = 0;
		system("cls");
		showLines();
		showCinemaBillboard();
		printf("\n Elija una pelicula de la cartelera para el horario %d ", i + 1);
		scanf_s("%d", &option);
		movies[option - 1].setIsMovieBeingShown(true);
		vector[i] = movies[option - 1].getDuration();
		rooms[numberOfRoom].getSchedules()[i].setPositionMovie(option - 1);
		rooms[numberOfRoom].getSchedules()[i].setPositionRoom(i);
		rows = rooms[numberOfRoom].getRows();
		rooms[numberOfRoom].getSchedules()[i].setRows(rows);
		columns = rooms[numberOfRoom].getAmountOfSeatsPerRows();
		rooms[numberOfRoom].getSchedules()[i].setColums(columns);

	}

}

void Cinema::makeReservation()
{
	int option = 0;
	do {
		system("cls");
		showCinemaBillboard();
		printf("\n Elija una pelicula de la cartelera que desea ver y digite el numero de esta:");
		scanf_s("%d", &option);
		if (movies[option - 1].getIsMovieBeingShown() != false) {
			printf("\n La pelicula %s se esta proyectando en:\n",movies[option-1].getName());
			showSchedule(option - 1);

		}
		else {

			printf("\n La pelicula que eligio no esta todavia registrada en ningun horario. Trate con otra.\n ");
			system("pause");

		}
	} while (movies[option - 1].getIsMovieBeingShown() != true);

}

void Cinema::showSchedule(int aPositionMovie)
{
	for (int i = 0; i < amountOfRooms; i++) {
		for(int j=0;j<rooms[i].getAmountOfSchedules();j++)
			if (rooms[i].getSchedules()[j].getPositionMovie() == aPositionMovie) {

				rooms[i].getSchedules()[j].showInformationSchedule();
				
			}

	}

}

void Cinema::showSecondOptionMenu() {
	string option = " ";
	printf("\n\t Digite la opcion que quiere: ");
	cin >> option;

	if (option == "i") {
		system("cls");
		printf("\n\t Peliculas: \n");
		showLines();
		fillArrayOfMovies();
		showLines();
		showCinemaBillboard();
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	else if (option == "ii") {
		system("cls");
		printf("\n\t Salas: \n");
		showLines();
		fillArrayOfRooms();
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	else if (option == "iii") {
		system("cls");
		printf("\n\t Horarios: ");
		showLines();
		fillInformationschedules();
		system("pause");
		system("cls");
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	else {
		printf("\n\t Esta de nuevo en el menu principal: ");
		printf("\n\n\t La opcion que digito es erronea, digitela nuevamente... \n\n");
		showUserMenu();
	}

}

void Cinema::showUserMenu(){

	showLines();
	printf(" \t\t Menu  ");
	showLines();
	printf("\n\ta.Archivo  \n");
	printf("\n\tb.Mantenimiento  \n");
	printf("\n\tc.Reserva  \n");
	printf("\n\td.Venta  \n");
	showLines();
	printf("\n\t Digite la opcion que quiere : ");
	cin >> userOption;
	system("cls");
	showUserOption(userOption);

}

void Cinema::showUserOption(char userOption)
{
	switch (userOption)
	{
	case 'a':
		
		system("cls");
		printf("\n\t Archivo: \n");
		showLines();
		printf("\n\t i.  Acerca de:  \n");
		printf("\n\t ii. Salir  \n");
		showLines();
		showFirstOptionMenu();
		system("pause");

		showUserMenu();

		break;

	case 'b':

		system("cls");
		printf("\n\t Mantenimiento: \n");
		showLines();
		printf("\n\t i.Peliculas \n");
		printf("\n\t ii.Salas \n");
		printf("\n\t iii.Horarios\n");
		showLines();
		showSecondOptionMenu();
		showUserMenu();
		; break;

	case 'c':

		system("cls");

		printf("\n\t Reserva: ");
		showLines();

		system("pause");

		showUserMenu();
		; break;

	case 'd':

		system("cls");

		printf("\n\t Venta: ");
		showLines();

		system("pause");

		showUserMenu();

		; break;

	default:
		printf("\n\t Esta de nuevo en el menu principal: ");
		printf("\n\n\t La opcion que digito es erronea, digitela nuevamente... \n\n");

		showUserMenu();
		; break;
	}
}





