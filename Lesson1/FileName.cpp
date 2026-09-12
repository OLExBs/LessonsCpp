#include<iostream>
using namespace std;

int main()
{
	cout << "Hello World!";








	int age = 15;
	int Age = 45;
	cout<< "Age student : " << age << endl;
	cout<< "Age of man : " << Age << endl;



	int days_in_2000_year = 366;
	const int hours_in_day = 24;
	int hours_in_2000_year = days_in_2000_year * hours_in_day;
	cout << "Hours in 2000 year : " << hours_in_2000_year << endl;

	float discount = 0.05;
	float cost = 80.99;
	int count = 4;
	float price;
	price = discount * cost * count;
	cout << "You need to pay : " << price<< " grn" << endl;






	cout << "Enter cost of product : ";
	cin >> cost;
	cout << "Enter count : ";
	cin >> count;


	float price;
	price = discount * cost * count;
	cout << "You need to pay : " << price << " grn" << endl;




	return 0;
}
