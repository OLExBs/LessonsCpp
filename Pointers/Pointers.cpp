

#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	int a = 5;
	int b = 7;
	int c = 9;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	cout << "Product: " << (*pa) * (*pb) * (*pc) << endl;
	cout << "Average: " << ((*pa) + (*pb) + (*pc)) / 3.0 << endl;
	cout << "Minimum: " << min({ *pa, *pb, *pc }) << endl;



	//2 
	const int size = 10;
	int arr[size] = { 5, 3, 8, 6, 2, 7, 4, 1, 9, 0 };
	int* parr = arr;

	
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << *(parr + i) << " ";
	}

	cout << endl;

	cout << "Reversed array: ";
	for (int i = size - 1; i >= 0; i--) {
		cout << *(parr + i) << " ";
	}

	cout << endl;


	for (int i = 0; i < 255; i++)

	{

		cout << "[" << i << "] - " << (char)i << endl;

	}



}


