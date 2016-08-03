#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class PSW
{
public:
	bool digits;
	bool lower;
	bool upper;
	bool symbols;
	bool ambiguous;
	int pswLength;
	string psw;

	const string digitList = "1234567890";
	const string lowerList = "abcdefghijklmnopqrstuvwxyz";
	const string upperList = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string symbolList = "~!@#$%^&*_+-=?";
	const string ambiguousList = "{}[]()/|\'`~,\".:;.<>";
	const string pswLengthList = "6-128";

	void createPsw();

private:
	void createWorkList();
	string workList;
};

void PSW::createPsw(void)
{
	createWorkList();
	int pswNum;
	int workLength = workList.length();
	for (int i = 0; i < pswLength; i++)
	{
		pswNum = rand() % workLength;
		psw += workList[pswNum];
	}
}

void PSW::createWorkList(void)
{
	if (digits == true)
	{
		workList += digitList;
	}
	if (lower == true)
	{
		workList += lowerList;
	}
	if (upper == true)
	{
		workList += upperList;
	}
	if (symbols == true)
	{
		workList += symbolList;
	}
	if (ambiguous == true)
	{
		workList += ambiguousList;
	}
}

void incorrectInput(void)
{
	cout << "Incorrect input! Please try again." << endl;
	cin.clear();
	cin.ignore();
}

bool askOption(string option, string list)
{
	string choice;
	while (1)
	{
		cout << "Do you want to include " << option << " (" << list << ") (Y or N)";
		cin >> choice;
		if (choice == "y" || choice == "Y")
		{
			return true;
		}
		else if (choice == "n" || choice == "N")
		{
			return false;
		}
		else
		{
			incorrectInput();
		}
	}
}

int askLength(string option, string list)
{
	int choice;
	while (1)
	{
		cout << "Do you want to define " << option << " (" << list << ") (6 or 128)";
		cin >> choice;
		if (choice >= 6 && choice <= 128)
		{
			return choice;
		}
		else
		{
			incorrectInput();
		}
	}
}

void menu(PSW *pPSW)
{
	while (1)
	{
		pPSW->digits = askOption("digits", pPSW->digitList);
		pPSW->lower = askOption("lower letters", pPSW->lowerList);
		pPSW->upper = askOption("upper letters", pPSW->upperList);
		pPSW->symbols = askOption("symbols", pPSW->symbolList);
		pPSW->ambiguous = askOption("ambiguous characters", pPSW->ambiguousList);
		if (pPSW->digits == false && pPSW->lower == false && pPSW->upper == false && pPSW->symbols == false && pPSW->ambiguous == false)
		{
			cout << "You mast choose at least 1 option!" << endl;
			continue;
		}
		pPSW->pswLength = askLength("password length", pPSW->pswLengthList);
		break;
	}
}

void display(PSW *pPSW)
{
	cout << "*** your password ***" << endl;
	pPSW->createPsw();
	cout << pPSW->psw << endl;
	cout << "*** ------- ***" << endl;
}

bool start(void)
{
	string choice;
	while (1)
	{
		cout << "Do you want to create new password (Y or N)?";
		cin >> choice;
		if (choice == "n" || choice == "N")
		{
			return false;
		}
		else if (choice == "y" || choice == "Y")
		{
			return true;
		}
		else
		{
			incorrectInput();
		}
	}
}

int main()
{
	srand(time(NULL));

	while (start())
	{
		PSW *pPSW = new PSW;
		menu(pPSW);
		display(pPSW);
		delete pPSW;
	}
	cout << "Goodbye!" << endl;
	cin.ignore();
	cin.get();
	return 0;
}