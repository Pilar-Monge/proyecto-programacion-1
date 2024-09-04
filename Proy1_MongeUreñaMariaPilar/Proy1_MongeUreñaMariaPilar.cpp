// Proy1_MongeUreñaMariaPilar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>

using namespace std;


char  userOption = NULL;

void showUserMenu();
int showUserOption(char userOption);

void showLines() {

	printf("\033[0;32m ");
	printf("\n ------------------------------------  \n");
	printf("\033[0m");
}

void showUserMenu( )
{
	showLines();
	printf(" \t\t Menu  ");
	showLines();
	printf("\n\ta.Archivo  \n");
	printf("\n\tb.Mantenimiento  \n");
	printf("\n\tc.Reserva  \n");
	printf("\n\td.Venta  \n");
	showLines();
	printf("\n\t Digite la opcion que quiere : ");
	
	scanf_s("%c", &userOption);
	system("cls");
	showUserOption(userOption );
}


int showUserOption(char userOption) {
	
	switch (userOption)
	{
	case 'a':
		
		system("cls");
		printf("\n\t Archivo: \n");
		showLines();
		printf("\n\t i.  Acerca de:  \n");
		printf("\n\t ii. Salir  \n");
		showLines();
		printf("\n\t Digite la opcion que quiere: ");
		scanf_s();
	
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
		printf("\n\t Digite la opcion que quiere: ");
		system("pause");

		showUserMenu( );
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
		printf("\n\n\t Error al digitar la opcion. \n");
		printf("\n\n\t La opcion que digito es erronea, digitela nuevamente... \n\n");

		showUserMenu();
		; break;
	}
	return 0;

}



int main()
{
	showUserMenu( );


	return 0;

}