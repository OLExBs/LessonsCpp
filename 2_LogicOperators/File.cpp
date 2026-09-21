#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!\n";

	int a = 5, b = 7;
	cout << a + b << "\n";
	b++;
	cout << b << "\n";
	int c = 23.3;
	cout << c << "\n";



	cout << (5 < 3) << endl;
	cout << (5 > 3) << endl;
	cout << (5 == 3) << endl;
	cout << (5 != 3) << endl;


	float a, b, res;
	char key;
	cout << "Enter first number:"; cin >> a;
	cout << "Enter second number:"; cin >> b;
	cout << "Enter operation (+, -, *, /):"; cin >> key;

	if (key == '+') {
		res = a + b;
	}
	else if (key == '-') {
		res = a - b;
	}
	else if (key == '*') {
		res = a * b;
	}
	else if (key == '/') {
		res = a / b;
	}
	else if (b == 0) {
		cout << "Error: Division by zero!" << endl;

	}
	else {
		cout << "Invalid operation!" << endl;
		return 1; // Exit with error code
	}

}
