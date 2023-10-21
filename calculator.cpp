// Project1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	int number0, number1, result;
	char operation;

	cout << "Give a number a: ";
	cin >> number0;
	cout << "What am I do with numbers?: ";
	cin >> operation;
	cout << "Give a number b: ";
	cin >> number1;

	switch (operation)
	{
		case '+':
			result = number0 + number1;
			cout << "result equal: " << result;
			break;
		case '-':
			result = number0 - number1;
			cout << "result equal: " << result;
			break;
		case '*':
			result = number0 * number1;
			cout << "result equal: " << result;
			break;
		case '/':
			result = number0 / number1;
			cout << "result equal: " << result;
			break;
		default:
			cout << endl << "\nOur calculator is too bad for this complicated calculations Sorry!!!\n";
	}
}

