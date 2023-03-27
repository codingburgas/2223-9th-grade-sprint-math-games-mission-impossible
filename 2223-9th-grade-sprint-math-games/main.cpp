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
	cout << setw(150) << "The program will give you a equation in binary number system along with a table to help you. " << endl;
	cout << setw(190) << "You shall gather a word by compleating equations. After converting the number to a decimal number system you need to calculate the resulting equation and if it is correct you move on to the next level." << endl;
	cout << setw(120) << "YOU HAVE ONLY TWO LIVES!!!";
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
	cout << setw(112) << "10101    011011  10010   " << endl;
	cout << setw(113) << "10   10    10    10   01  " << endl;
	cout << setw(155) << " _____________________________________________________________________________________ 01010      01    01   10 ________________________________________________________________________________________________" << endl;
	cout << setw(112) << "01   10    10    10   10 " << endl;
	cout << setw(112) << "10   01    01    10  01  " << endl;
	cout << setw(112) << "101010     01    01100   " << endl;
	cout << endl;
	cout << setw(107) << "Binary to Decimal";
	cout << endl;
	cout << endl;
}

void Main_menu1()//case - arrow at start game
{
	system("cls");
	topMenuPart();
	cout << setw(80) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(24) << "-> Start game" << setw(12) << char(179) << endl;
	cout << setw(80) << char(179) << setw(19) << "Rules" << setw(17) << char(179) << endl;
	cout << setw(80) << char(179) << setw(18) << "Exit" << setw(18) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(100) << "Controls: Up arrow - up" << endl;
	cout << setw(104) << "Down arrow - down" << endl;
	cout << setw(112) << "Enter key - select option" << endl;
	cout << setw(118) << "Backspace - return to last page" << endl;

}
void Main_menu2()//case - arrow at rules menu
{
	system("cls");
	topMenuPart();
	cout << setw(80) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(24) << "Start game" << setw(12) << char(179) << endl;
	cout << setw(80) << char(179) << setw(19) << "-> Rules" << setw(17) << char(179) << endl;
	cout << setw(80) << char(179) << setw(18) << "Exit" << setw(18) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(100) << "Controls: Up arrow - up" << endl;
	cout << setw(104) << "Down arrow - down" << endl;
	cout << setw(112) << "Enter key - select option" << endl;
	cout << setw(118) << "Backspace - return to last page" << endl;
}
void Main_menu3()//case - arrow at start game
{
	system("cls");
	topMenuPart();
	cout << setw(80) << char(218); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(191) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(21) << "THE GAME" << setw(15) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(24) << "Start game" << setw(12) << char(179) << endl;
	cout << setw(80) << char(179) << setw(19) << "Rules" << setw(17) << char(179) << endl;
	cout << setw(80) << char(179) << setw(18) << "-> Exit" << setw(18) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(179) << setw(36) << char(179) << endl;
	cout << setw(80) << char(192); for (int i = 1; i < 36; i++) { cout << char(196); } cout << char(217) << endl << endl << endl;
	cout << setw(100) << "Controls: Up arrow - up" << endl;
	cout << setw(104) << "Down arrow - down" << endl;
	cout << setw(112) << "Enter key - select option" << endl;
	cout << setw(118) << "Backspace - return to last page" << endl;
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

void print_level_easy()
{
	system("cls");
	int answOne, answTwo, answTree, answFour, answFive, answSix;
	string word;
	cout << setw(20) << "Table for help!" << endl;
	cout << endl;
	cout << "0000     ->     0|" << setw(20) << "0001     ->     1|" << setw(20) << "0010     ->     2|" << endl;
	cout << "0011     ->     3|" << setw(20) << "0100     ->     4|" << setw(20) << "0101     ->     5|" << endl;
	cout << "0110     ->     6|" << setw(20) << "0111     ->     7|" << setw(20) << "1000     ->     8|" << endl;
	cout << "1001     ->     9|" << setw(20) << "1010     ->     10|" << setw(20) << "1011     ->     11|" << endl;
	cout << "1100     ->     12|" << setw(20) << "1101     ->     13|" << setw(20) << "1110     ->     14|" << setw(20) << "1111     ->     15" << endl;
	cout << endl;
	cout << endl;
	cout << setw(16) << "_________________________" << endl;
	cout << setw(10) << "|                        |" << endl;
	cout << setw(10) << "|(1001 * 0010) / 0011 = ?|" << endl;
	cout << setw(10) << "|                        |" << endl;
	cout << setw(10) << "|________________________|" << endl;
	cout << setw(15) << "Enter your answer: ";//the answer is 6
	cin >> answOne;
	if (answOne == 6)
	{
		cout << endl;
		cout << "Well done here is your first letter: B" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answOne;
		if (answOne == 6)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	cout << endl;
	cout << endl;
	cout << setw(16) << "__________________________________" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|(1111 / 0011) * (0010 + 0011) = ?|" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|_________________________________|" << endl;
	cout << setw(10) << "Enter your answer: ";//the answer is 25
	cin >> answTwo;
	if (answTwo == 25)
	{
		cout << endl;
		cout << "Well done here is your second letter: i" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answTwo;
		if (answTwo == 25)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	cout << endl;
	cout << endl;
	cout << setw(16) << "__________________________________" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|    (1100 * 1010) + 0010 = ?     |" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|_________________________________|" << endl;
	cout << "Enter you answer: ";// the answer is 122
	cin >> answTree;
	if (answTree == 122)
	{
		cout << endl;
		cout << "Well done here is your third letter: n" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answTree;
		if (answTree == 122)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	cout << endl;
	cout << setw(16) << "__________________________________" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|     (1101 * 0010) - 1111 = ?    |" << endl;
	cout << setw(10) << "|                                 |" << endl;
	cout << setw(10) << "|_________________________________|" << endl;
	cout << "Enter you answer: ";//the answer is 11
	cin >> answFour;
	if (answFour == 11)
	{
		cout << endl;
		cout << "Well done here is your fourth letter: a" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answFour;
		if (answFour == 11)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	cout << endl;
	cout << setw(16) << "_______________________________________________" << endl;
	cout << setw(10) << "|                                              |" << endl;
	cout << setw(10) << "|((1110 / 0010) + (0110 + 0001)) / 0111 = ?    |" << endl;
	cout << setw(10) << "|                                              |" << endl;
	cout << setw(10) << "|______________________________________________|" << endl;
	cout << "Enter your answer: ";//the answer is 2
	cin >> answFive;
	if (answFive == 2)
	{
		cout << endl;
		cout << "Well done here is your fifth letter: r" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answFive;
		if (answFive == 2)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	cout << endl;
	cout << setw(16) << "___________________________________________________________" << endl;
	cout << setw(10) << "|                                                          |" << endl;
	cout << setw(10) << "|((((1111 / 0011) + (1111 / 0101)) + 1111) + 1) / 4 = ?    |" << endl;
	cout << setw(10) << "|                                                          |" << endl;
	cout << setw(10) << "|__________________________________________________________|" << endl;
	cout << "Enter your answer: ";//the answer is 6
	cin >> answSix;
	if (answSix == 6)
	{
		cout << endl;
		cout << "Well done here is your sixth letter: y" << endl;
		cout << "Now continue" << endl;
		system("pause");
	}
	else
	{
		cout << endl;
		cout << "Almost there!";
		cout << endl;
		cout << "Try again:  ";
		cin >> answSix;
		if (answSix == 6)
		{
			system("pause");
		}
		else
		{
			cout << endl;
			cout << "You lost!";
			exit(0);
		}
	}
	system("cls");
	cout << endl;
	cout << "Congratulations player, you have beaten the game. Now could you tell me what is the word: ";
	cin >> word;
	if (word == "Binary")
	{
		cout << endl;
		cout << "Nice work, i am really surprised you have completed all the quations!!!";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << " _______  _______  __    _  _______  ______    _______  _______  __   __  ___      _______  _______  ___   _______  __    _  _______ " << endl;
		cout << "|       ||       ||  |  | ||       ||    _ |  |   _   ||       ||  | |  ||   |    |   _   ||       ||   | |       ||  |  | ||       |" << endl;
		cout << "|       ||   _   ||   |_| ||    ___||   | ||  |  |_|  ||_     _||  | |  ||   |    |  |_|  ||_     _||   | |   _   ||   |_| ||  _____|" << endl;
		cout << "|       ||  | |  ||       ||   | __ |   |_||_ |       |  |   |  |  |_|  ||   |    |       |  |   |  |   | |  | |  ||       || |_____ " << endl;
		cout << "|      _||  |_|  ||  _    ||   ||  ||    __  ||       |  |   |  |       ||   |___ |       |  |   |  |   | |  |_|  ||  _    ||_____  |" << endl;
		cout << "|     |_ |       || | |   ||   |_| ||   |  | ||   _   |  |   |  |       ||       ||   _   |  |   |  |   | |       || | |   | _____| |" << endl;
		cout << "|_______||_______||_|  |__||_______||___|  |_||__| |__|  |___|  |_______||_______||__| |__|  |___|  |___| |_______||_|  |__||_______|" << endl;
		cout << endl;
		cout << endl;
		cout << "Created by: Lazar Apostolov, Kristina Zheleva, Svetoslav Zhelev, Dimityr Georgiev";
	}
	else
	{
		cout << endl;
		cout << "Ooops you have got it all wrong!!!";
		exit(0);
	}
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
	case 2: print_level_easy(); break; // start game
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
		char key_input = _getch();
		switch (key_input)
		{
		case KEY_UP: index++; checkIndex(); break;
		case KEY_DOWN: index--; checkIndex(); break;
		case KEY_ENTER: check_for_current_menu(); break;
		case KEY_BACKSPACE: checkIndex(); break;
		}
	}
}