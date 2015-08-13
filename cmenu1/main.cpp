#include <iostream>

bool menu1(void);  // Prototypes
void menu2(void);

using namespace std;

int main(void)
{
	bool quitNow = false; // Loop control

	while (true)
	{
		system("cls"); // Clear screen

		quitNow = menu1();

		if (quitNow)
			break;

		system("pause"); // Delay
	}

	return 0;
}

bool menu1(void)
{
	int choice;
	bool quitNow = false;

	cout << "(1) Sports" << endl;
	cout << "(2) Game" << endl;
	cout << "(3) Quit" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You choose Sports" << endl;
		break;
	case 2:
		cout << "You choose Games" << endl;
		menu2();
		break;
	case 3:
		cout << "You choose to Quit" << endl;
		quitNow = true;
		break;
	default:
		cout << "Bad value must enter 1, 2, or 3" << endl;
	}

	return quitNow;
}

void menu2(void)
{
	int choice;
	bool quitNow = false;

	while (true)
	{
		cout << "\t\t(1) Card Games" << endl;
		cout << "\t\t(2) Board Games" << endl;
		cout << "\t\t(3) Go Back" << endl;
		cout << "\t\tInput your choice ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\t\tThe rule of Cards game to win" << endl;
			break;
		case 2:
			cout << "\t\tThe goal of board games is to take all the pieces" << endl;
			break;
		case 3:
			cout << "\t\tReturning to previous menu" << endl;
			quitNow = true;
			break;
		default:
			cout << "\t\tBad value must enter 1, 2, or 3" << endl;
		}

		if (quitNow)
			break;
	}

	return;
}