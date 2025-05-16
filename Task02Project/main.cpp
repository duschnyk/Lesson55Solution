#include <iostream>
using namespace std;

bool equals(int first, int second);

int main() {
	int first, second;

	cout << "input first: ";
	cin >> first;

	do
	{
		cout << "input second: ";
		cin >> second;
	} while (second < 0);

	cout << "result: " << (equals(first, second) ? "Yes" : "No") << endl;

	return 0;
}