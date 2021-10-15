// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
	double var1, var2;

begining:

	system("cls");

	cout << "Enter first number: " << endl;
	cin >> var1;

	if (var1 / 1)
	{
	}

	else
	{
		cout << "You didn't typed number !!" << endl;
		return 0;
	}

	cout << "Enter second number: " << endl;
	cin >> var2;

	if (var2 / 1)
	{
	}

	else
	{
		cout << "You didn't typed number !!" << endl;
		return 0;
	}

	cout << "What do you want to do with that numbers ?" << endl;
	cout << "\t+   add" << endl;
	cout << "\t-   substract" << endl;
	cout << "\t*   multiply" << endl;
	cout << "\t/   divide" << endl;

	char decision;

	cin >> decision;

	system("cls");

	switch (decision)
	{
	case '+':
		cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
		break;

	case '-':
		cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
		break;

	case '*':
		cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
		break;

	case '/':
		if (var2 != 0)
			cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
		else
			cout << "You can't divide with 0 :(" << endl;
		break;

	default:
		cout << "You typed wrong character" << endl;
		break;
	}

	char quitDecision;

	cout << "Do you want to continue ? (Y/N)" << endl;
	cin >> quitDecision;

	if (quitDecision == 'y' || quitDecision == 'Y')
	{
		goto begining;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
