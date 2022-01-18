#include <iostream>

using namespace std;

double power(double n, int p = 2);

int main()
{
	double number, answer;
	int pow;
	char yeserno;

	cout << "Enter number: ";
	cin >> number;
	cout << "You will enter the degree (y/n)? ";
	cin >> yeserno;

	if (yeserno == 'y')
	{
		cout << "Enter degree: ";
		cin >> pow;
		answer = power(number, pow);
	}
	else
	{
		answer = power(number);
	}

	cout << "Result: " << answer << endl;

	system("pause");
	return 0;
}

double power(double n, int p)
{
	double result = 1.0;

	for (int i = 0; i < p; i++)
	{
		result *= n;
	}

	return result;
}