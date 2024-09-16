
#include "Cinema.h"

Cinema::Cinema(){
	amountOfMovies = 0;
	amountOfRooms = 0;
	userOption = NULL;
	movies[amountOfMovies];

}

Cinema::Cinema(int anAmountOfMovies, int anAmountOfRooms,char  anUserOption, Movie* aMovies){
	amountOfMovies = anAmountOfMovies;
	amountOfRooms = anAmountOfRooms;
	userOption = anUserOption;
	movies[amountOfMovies];
}

Cinema::~Cinema()
{
	delete[] movies;
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
	printf("\n Cuantas peliculas quieren ingresar: ");
	scanf_s("%d", &amountOfMovies);

	movies = new Movie[amountOfMovies];

	printf("\n Por favor ingrese la informacion solicitada.\n ");
	showLines();
	for (int i = 0; i < amountOfMovies; i++) {

		printf("\n\t Pelicula %d \n",i+1);
		/*Movie p;
		p.askInformation();
		movies[i]= p;*/
		movies[i].askInformation();
		
		system("pause");
		system("cls");
	}

}

void Cinema::fillArrayOfRooms()
{
	printf("\n Cuantas peliculas quieren ingresar: ");
	scanf_s("%d", &amountOfRooms);

	movies = new Movie[amountOfRooms];

	printf("\n Por favor ingrese la informacion solicitada.\n ");
	showLines();
	for (int i = 0; i < amountOfRooms; i++) {

		printf("\n\t Pelicula %d \n", i + 1);
		/*Movie p;
		p.askInformation();
		movies[i]= p;*/
		movies[i].askInformation();
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
		showCinemaBillboard();
		// pedir info salas
		
		printf("\n\t Esta de nuevo en el menu principal: ");
		showUserMenu();
	}
	else if (option == "iii") {
		system("cls");
		printf("\n\t Horarios: ");
		showLines();
		//pedir info horarios
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



