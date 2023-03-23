#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h> 

using namespace std;

int index = 2;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13
#define KEY_BACKSPACE 8

void loadingMenu()
{
	system("COLOR 0e");
	system("cls");

	cout << setw(200) << " __   __  ___   _______  _______  ___   _______  __    _        ___   __   __  _______  _______  _______  _______  ___   _______  ___      _______ " << endl;
	cout << setw(200) << "|  |_|  ||   | |       ||       ||   | |       ||  |  | |      |   | |  |_|  ||       ||       ||       ||       ||   | |  _    ||   |    |       |" << endl;
	cout << setw(200) << "|       ||   | |  _____||  _____||   | |   _   ||   |_| |      |   | |       ||    _  ||   _   ||  _____||  _____||   | | |_|   ||   |    |    ___|" << endl;
	cout << setw(200) << "|       ||   | | |_____ | |_____ |   | |  | |  ||       |      |   | |       ||   |_| ||  | |  || |_____ | |_____ |   | |       ||   |    |   |___ " << endl;
	cout << setw(200) << "|       ||   | |_____  ||_____  ||   | |  |_|  ||  _    |      |   | |       ||    ___||  |_|  ||_____  ||_____  ||   | |  _   | |   |___ |    ___|" << endl;
	cout << setw(200) << "| ||_|| ||   |  _____| | _____| ||   | |       || | |   |      |   | | ||_|| ||   |    |       | _____| | _____| ||   | | |_|   ||       ||   |___ " << endl;
	cout << setw(200) << "|_|   |_||___| |_______||_______||___| |_______||_|  |__|      |___| |_|   |_||___|    |_______||_______||_______||___| |_______||_______||_______|" << endl;

	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bar1 = 177, bar2 = 219;

	cout << "\n\n\n\t\t\t\tLoading...";
	cout << "\n\n\n\t\t\t\t";

	for (int i = 0; i < 25; i++)
		cout << (char)bar1;

	cout << "\r";
	cout << "\t\t\t\t";
	for (int i = 0; i < 25; i++)
	{
		cout << (char)bar2;
		Sleep(150);
	}

	cout << "\n\t\t\t\t" << (char)1 << "!";
	Sleep(250);
	system("COLOR E");
}

int main()
{
	//the rest of the code will be added soon.
