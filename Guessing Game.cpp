#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
#include<Windows.h>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
class alphabet
{
private:
	char user1[10];
	char user2[10];
	int alpharand;
	int num1, num2;
	char guess;
public:
	void generate_aplha()
	{
		srand(time(0));
		alpharand = rand() % 26;
		guess = alpharand + 65;	//DISPLAY A-Z 
	}
	void inputplayer1()
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> user1[i];
		}
	}
	void inputplayer2()
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> user2[i];
		}
	}
	void display1()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << user1[i];
		}
	}
	void dipslay2()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << user2[i];
		}
	}
	void guess_selection()
	{
		generate_aplha();;
		bool temp, swap;
		for (int i = 0; i < 10; i++)
		{
			if (user1[i] == guess)
			{
				temp = true;
				num1 = i;
				break;
			}
			else
			{
				temp = false;
				num1 = 0;
			}
		}
		for (int j = 0; j < 10; j++)
		{
			if (user2[j] == guess)
			{
				swap = true;
				num2 = j;
				break;
			}
			else
			{
				swap = false;
				num2 = 0;
			}
		}
		if (swap == true && temp == true)
		{
			if (num1 < num2)
			{
				cout << "\t\t\t\t\t\tPLAYER 1 WINS !!" << endl;
			}
			else if (num2 > num1)
			{
				cout << "\t\t\t\t\t\tPLAYER 2 WINS !!" << endl;
			}
			else
			{
				cout << "\t\t\t\t\t\tDRAW!!";
			}
		}
		else if (swap == true && temp == false)
		{
			cout << "\t\t\t\t\t\tPLAYER 2 WINS !!" << endl;
		}
		else if (swap == false && temp == true)
		{
			cout << "\t\t\t\t\t\tPLAYER 1 WINS!!" << endl;
		}
		else
		{
			cout << "\n\t\t\t\t\t\tNOT FOUND IN BOTH " << endl;
		}
		cout << "\t\t\t\t\t\tSECRET ALPHABET: " << guess << endl;
	}
};
class menu
{
private:
	alphabet alpha;
public:
	void displaymenu()
	{
		system("COLOR 2");
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t" << setw(25) << setfill('-') << "\n";
		cout << setw(49) << setfill(' ') << "" << setw(26) << setfill(' ') << "\n";
		cout << setw(49) << setfill(' ') << "" << setw(4) << setfill(' ') << "ALPHABETS GUESSING GAME" << setw(11) << setfill(' ') << "\n";
		cout << setw(49) << setfill(' ') << "" << setw(26) << setfill(' ') << "\n";
		cout << "\t\t\t\t\t\t" << setw(25) << setfill('-') << "\n";
		system("cls");
		system("COLOR 5");
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t" << setw(15) << setfill('-') << "\n";
		cout << setw(49) << setfill(' ') << "" << setw(10) << setfill(' ') << "RULES!!" << setw(11) << setfill(' ') << "\n";
		cout << "\t\t\t\t\t\t" << setw(15) << setfill('-') << "\n";
		cout << "\t\t\t\t\t\t" << setw(15) << "\n\t\t\t\t1- RANDOM GENERATE ALPHABETS (A-Z).\n\t\t\t\t2- ASK PLAYER AND PLAYER 2 TO ENTER ALPHABETS.\n\t\t\t\t3- THE PLAYER WHOSE STRINGS CONTAINS THE KEY ALPHABET WILL WIN.\n\t\t\t\t4- IF THE BOTH PLAYER HAVE KEY ALPHABETS, THEN THE PLAYER FOR WHICH IT OCCURS \n\t\t\t\tEARLIER IN THE STRING WILL WIN." << endl;
		system("cls");
		system("COLOR 6");
		cout << "\n\n\n\n\n\t\t\t\t\t\tPLAYER-1 ENTER ALPHABETS : ";
		alpha.inputplayer1();
		cout << "\n\t\t\t\t\t\tPLAYER-2 ENTER ALPHABETS : ";
		alpha.inputplayer2();
		/*system("cls");*/
		system("COLOR 8");
		cout << "\n\n\t\t\t\t\t\t" << setw(40) << setfill('-') << "\n";
		cout << "\t\t\t\t\t\tALPHABETS OF PLAYER-1 : ";
		alpha.display1();
		cout << "\n\t\t\t\t\t\tALPHABETS OF PLAYER-2 : ";
		alpha.dipslay2();
		cout << "\n\t\t\t\t\t\t" << setw(40) << setfill('-') << "\n";
		alpha.guess_selection();
	}

};

int main()
{
	menu menuu;
	menuu.displaymenu();
	_getch();
	return 0;
}