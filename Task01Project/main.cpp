#include <iostream>
using namespace std;

long long popower(int number, int power);

int main() {
	int number;
	int power;

	cout << "Input number: ";
	cin >> number;

	do
	{
		cout << "Input power: ";
		cin >> power;
	} while (power < 0);

	cout << number << "^" << power << " = " << popower(number, power) << endl;

	return 0;
}