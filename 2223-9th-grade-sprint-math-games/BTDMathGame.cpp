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

void tableForHelp()
{
	system("cls");
	system("Color ");
	cout << setw(8) << "Binary" << setw(15) << "Decimal" << endl;
	cout << endl;
	cout << setw(20) << "0000     ->     0" << endl;
	cout << setw(20) << "0001     ->     1" << endl;
	cout << setw(20) << "0010     ->     2" << endl;
	cout << setw(20) << "0011     ->     3" << endl;
	cout << setw(20) << "0100     ->     4" << endl;
	cout << setw(20) << "0101     ->     5" << endl;
	cout << setw(20) << "0110     ->     6" << endl;
	cout << setw(20) << "0111     ->     7" << endl;
	cout << setw(20) << "1000     ->     8" << endl;
	cout << setw(20) << "1001     ->     9" << endl;
	cout << setw(21) << "1010     ->     10" << endl;
	cout << setw(21) << "1011     ->     11" << endl;
	cout << setw(21) << "1100     ->     12" << endl;
	cout << setw(21) << "1101     ->     13" << endl;
	cout << setw(21) << "1110     ->     14" << endl;
	cout << setw(21) << "1111     ->     15";
}

void gameRules()
{
	system("cls");
	system("Color ");
	cout << endl;
	cout << endl;
	//the initials 
	cout << setw(120) << "10101    011011  10010   " << endl;
	cout << setw(121) << "10   10    10    10   01  " << endl;
	cout << setw(120) << "01010      01    01   10 " << endl;
	cout << setw(120) << "01   10    10    10   10 " << endl;
	cout << setw(120) << "10   01    01    10  01  " << endl;
	cout << setw(120) << "101010     01    01100   " << endl;
	cout << endl;
	cout << setw(115) << "Binary to Decimal";
	cout << endl;
	cout << endl;
	//how to play
	cout << setw(167) << "-----------------------------------------------------> !HOW TO PLAY! <-----------------------------------------------------" << endl;
	cout << endl;
	cout << setw(150) << "The program will give you a single number in binary number system along with a table to help you. " << endl;
	cout << setw(190) << "You shall gather a word by answering equations. After converting the number to a decimal number system you need to calculate the resulting equation and if it is correct you move on to the next level." << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void topMenuPart()
{
	cout << setw(100) << " ____   _______  ____   _______  ____   _______  ____                                                                                              _______  ____   _______  ____   _______  ____   _______  " << endl;
	cout << setw(100) << "|    | |  _    ||    | |  _    ||    | |  _    ||    |                                                                                            |  _    ||    | |  _    ||    | |  _    ||    | |  _    | " << endl;
	cout << setw(100) << " |   | | | |   | |   | | | |   | |   | | | |   | |   |                                                                                            | | |   | |   | | | |   | |   | | | |   | |   | | | |   | " << endl;
	cout << setw(100) << " |   | | | |   | |   | | | |   | |   | | | |   | |   |                                                                                            | | |   | |   | | | |   | |   | | | |   | |   | | | |   | " << endl;
	cout << setw(100) << " |   | | |_|   | |   | | |_|   | |   | | |_|   | |   |                                                                                            | |_|   | |   | | |_|   | |   | | |_|   | |   | | |_|   | " << endl;
	cout << setw(100) << " |   | |       | |   | |       | |   | |       | |   |                                                                                            |       | |   | |       | |   | |       | |   | |       | " << endl;
	cout << setw(100) << " |___| |_______| |___| |_______| |___| |_______| |___|                                                                                            |_______| |___| |_______| |___| |_______| |___| |_______| " << endl;
	cout << endl;
	cout << endl;
	cout << setw(127) << "10101    011011  10010   " << endl;
	cout << setw(128) << "10   10    10    10   01  " << endl;
	cout << setw(180) << " ____________________________________________________________________________________________________ 01010      01    01   10 _________________________________________________________________________" << endl;
	cout << setw(127) << "01   10    10    10   10 " << endl;
	cout << setw(127) << "10   01    01    10  01  " << endl;
	cout << setw(127) << "101010     01    01100   " << endl;
	cout << endl;
	cout << setw(122) << "Binary to Decimal";
	cout << endl;
	cout << endl;
}

void Main_menu1()//case - arrow at start game
{
	system("cls");
	topMenuPart();
	cout << setw(95) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(24) << "-> Start game" << setw(12) << char(179) << endl;
	cout << setw(95) << char(179) << setw(19) << "Rules" << setw(17) << char(179) << endl;
	cout << setw(95) << char(179) << setw(18) << "Exit" << setw(18) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(115) << "Controls: Up arrow - up" << endl;
	cout << setw(119) << "Down arrow - down" << endl;
	cout << setw(127) << "Enter key - select option" << endl;
	cout << setw(133) << "Backspace - return to last page" << endl;

}
void Main_menu2()//case - arrow at rules menu
{
	system("cls");
	topMenuPart();
	cout << setw(95) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(24) << "Start game" << setw(12) << char(179) << endl;
	cout << setw(95) << char(179) << setw(19) << "-> Rules" << setw(17) << char(179) << endl;
	cout << setw(95) << char(179) << setw(18) << "Exit" << setw(18) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(115) << "Controls: Up arrow - up" << endl;
	cout << setw(119) << "Down arrow - down" << endl;
	cout << setw(127) << "Enter key - select option" << endl;
	cout << setw(133) << "Backspace - return to last page" << endl;
}
void Main_menu3()//case - arrow at start game
{
	system("cls");
	topMenuPart();
	cout << setw(95) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(24) << "Start game" << setw(12) << char(179) << endl;
	cout << setw(95) << char(179) << setw(19) << "Rules" << setw(17) << char(179) << endl;
	cout << setw(95) << char(179) << setw(18) << "-> Exit" << setw(18) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(179) << setw(36) << char(179) << endl;
	cout << setw(95) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(115) << "Controls: Up arrow - up" << endl;
	cout << setw(119) << "Down arrow - down" << endl;
	cout << setw(127) << "Enter key - select option" << endl;
	cout << setw(133) << "Backspace - return to last page" << endl;
}

void checkIndex()
{
	switch (index)
	{
	case 2: Main_menu1(); break;
	case 1: Main_menu2(); break;
	case 0: Main_menu3(); break;
	default:index = 2; Main_menu1(); break;
	}
}
void startGameMenu()
{
	//the game creation proccess will be done here
}
void rulesMenu()
{
	system("cls");
	gameRules();
}


void check_for_current_menu()
{
	switch (index)
	{
	case 2: startGameMenu(); break; // start game
	case 1: rulesMenu(); break; //enter rules menu
	case 0: exit(0); break; //exit the code
	}
}

int main()
{
	loadingMenu();
	system("cls");
	Main_menu1();
	while (true)
	{
		char n = _getch();
		switch (n)
		{
		case KEY_UP: index++; checkIndex(); break;
		case KEY_DOWN: index--; checkIndex(); break;
		case KEY_ENTER: check_for_current_menu(); break;
		case KEY_BACKSPACE: checkIndex(); break;
		}
	}
}
