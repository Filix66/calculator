// Project1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	int number0, number1, result;
	char operation;

	cout << "Podaj liczbe a: ";
	cin >> number0;
	cout << "Co mam zrobic z liczbami? : ";
	cin >> operation;
	cout << "Podaj liczbe b: ";
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
			cout << "Nasz kalkulator jest zbyt słaby na takie skomplikowanie obliczenia Przepraszamy!";
	}
}

