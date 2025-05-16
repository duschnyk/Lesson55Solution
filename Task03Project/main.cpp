#include <iostream>
using namespace std;

int sum_every_element_of_array(int* array, int size);

int main() {

	int array1[]{ 1,2,3,4,5,6,7,8,9 };
	int array2[]{ 1,2,3,4,5,6,7,8 };
	int array3[]{ 1 };

	cout << (sum_every_element_of_array(array1, 9) == 45 ? "pass" : "fail") << endl;
	cout << (sum_every_element_of_array(array2, 8) == 36 ? "pass" : "fail") << endl;
	cout << (sum_every_element_of_array(array3, 1) == 1 ? "pass" : "fail") << endl;

	return 0;
}