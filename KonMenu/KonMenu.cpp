#include <stdio.h>
#include <iostream>
#include <cstdlib>

#include "smdANSI.h"
#include "Tools.h"
#include "Task.h"
#include "CounterTask.h"

using namespace std;
using namespace Tasks;

CounterTask *p_CT;

void eins()
{
	HWHITE YELLOW
	cout << "1 wurde ausgewählt\n" << endl;
	NORMAL WHITE
}

void zwei()
{
	BRIGHT YELLOW
	cout << "2 wurde ausgewählt\n" << endl;
	NORMAL WHITE
}

void StartThread()
{
	BRIGHT GREEN
	cout << "Start Counter Thread" << endl;
	NORMAL WHITE
	if(p_CT == NULL)
	{
		p_CT = new CounterTask();
		p_CT->Run();
	}
	else
	{
		BRIGHT GREEN
		cout << "Thread is running" << endl;
		NORMAL WHITE
	}
}

void Error()
{
	BRIGHT RED
	cout << "Error" << endl;
	double d = 0;
	double e = 10 / d;
	cout << e << endl;
	NORMAL WHITE
}

void Exit()
{
	CYAN
	cout << "Ende.\n"<< endl;
	NORMAL WHITE
	if(p_CT != NULL) delete p_CT;
	exit(0);
}

void PrintMenu()
{
	GOTO(30,3) cout << "Menü:" << endl;
	GOTO(30,4) cout << "(1) Punkt eins" << endl;
	GOTO(30,5) cout << "(2) Punkt zwei" << endl;
	GOTO(30,6) cout << "(3) Start Thread" << endl;
	GOTO(30,7) cout << "(4) Beep" << endl;
	GOTO(30,8) cout << "(5) Error" << endl;
	GOTO(30,8) cout << "(6) Stop Thread" << endl;
	GOTO(30,9) cout << "(0) Exit" << endl;
	GOTO(30,10) cout << "Eingabe: ";
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
		   case 3: StartThread();
		   	   break;
		   case 4: BRIGHT MAGENTA BEEP cout << "Beep\n" << endl; NORMAL WHITE
		   	   break;
		   case 5: Error();
		   	   break;
		   case 6:
			   if(p_CT != NULL)
			   {
				   p_CT->m_IsRunning = false;
				   p_CT = NULL;
			   }
			   else
			   {
				   BRIGHT GREEN
				   cout << "Stop Counter Thread" << endl;
				   NORMAL WHITE
				   p_CT = NULL;
			   }
		   	   break;
		   case 0: Exit();
		   	   break;
		   default: RED cout << "Falsche Eingabe\n" << endl; NORMAL WHITE
		}
	}
	return 0;
}
