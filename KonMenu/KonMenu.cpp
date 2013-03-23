#include <stdio.h>
#include <iostream>
#include <cstdlib>

#include "smdANSI.h"
#include "Tools.h"

using namespace std;

void eins()
{
	YELLOW
	cout << "1 wurde ausgewählt\n" << endl;
	NORMAL WHITE
}

void zwei()
{
	BRIGHT YELLOW
	cout << "2 wurde ausgewählt\n" << endl;
	NORMAL WHITE
}

void Count()
{
	BRIGHT GREEN
	for(int i=1;i<=10;i++)
	{
		GOTO(1,1)
		BEEP
		cout << i;
		Tools::msleep(200);
	}
	NORMAL WHITE
	cout << endl << endl;
}

void Exit()
{
	CYAN
	cout << "Ende.\n"<< endl;
	NORMAL WHITE
	exit(0);
}

void PrintMenu()
{
	GOTO(30,3) cout << "Menü:" << endl;
	GOTO(30,4) cout << "(1) Punkt eins" << endl;
	GOTO(30,5) cout << "(2) Punkt zwei" << endl;
	GOTO(30,6) cout << "(3) Count" << endl;
	GOTO(30,7) cout << "(4) Beep" << endl;
	GOTO(30,8) cout << "(0) Exit" << endl;
	GOTO(30,9) cout << "Eingabe: ";
}

int main()
{
	CLSCRHOME
	BLUE
	cout << "Start Programm KonMenu\n" << endl;
	NORMAL WHITE

	int eingabe;
	while(eingabe != 0)
	{
		PrintMenu();
		cin >> eingabe;
		CLSCRHOME
		switch(eingabe){
		   case 1: eins();
		   	   break;
		   case 2: zwei();
		   	   break;
		   case 3: Count();
		   	   break;
		   case 4: BRIGHT MAGENTA BEEP cout << "Beep\n" << endl; NORMAL WHITE
		   	   break;
		   case 0: Exit();
		   	   break;
		   default: RED cout << "Falsche Eingabe\n" << endl; NORMAL WHITE
		}
	}
	return 0;
}
