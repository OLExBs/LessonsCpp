#include<iostream>
using namespace std;

int main()
{
	//cout << "Hello World!";








	//int age = 15;
	//int Age = 45;
	//cout<< "Age student : " << age << endl;
	//cout<< "Age of man : " << Age << endl;



	//int days_in_2000_year = 366;
	//const int hours_in_day = 24;
	//int hours_in_2000_year = days_in_2000_year * hours_in_day;
	//cout << "Hours in 2000 year : " << hours_in_2000_year << endl;

	//float discount = 0.05;
	//float cost = 80.99;
	//int count = 4;
	//float price;
	//price = discount * cost * count;
	//cout << "You need to pay : " << price<< " grn" << endl;






	//cout << "Enter cost of product : ";
	//cin >> cost;
	//cout << "Enter count : ";
	//cin >> count;


	//float price;
	//price = discount * cost * count;
	//cout << "You need to pay : " << price << " grn" << endl;
	cout << "1\n";
	cout << "I \n\t love \n\t\t you \n\t\t\t C++! \n ";

	cout << " 2.\n";
	cout << "\t ...:::RESUME:::...\n";
	cout << "Name:\t\t Oleksii\n";
	cout << "Surname:\t Motornyi\n";
	cout << "Last name:\t Oleksijovich\n";
	cout << "Date of birth:\t 22.07.2011\n";
	cout << "City:\t\t Rivne\n";
	cout << "Age:\t\t 15\n";
	cout << " \n";
	cout << "Hobby:\t\t Guitar\n";
	cout << "::.............................:: \n";

	cout << " 3.\n";
	float diag;
	const float diag_cm = 2.54;
	cout << "Enter diagonal of your TV(inches):";
	cin >> diag;
	float diag_in_cm = diag * diag_cm;
	cout << "Diagonal of your TV in cm: " << diag_in_cm << " cm" << endl;


	cout << " 4.\n";
	float k = 0;
	cout << "Enter grams of seeds for hamster(1 day): ";
	cin >> k;
	const int days = 30;
	float kilograms_for_month = (k * days)/1000;
	cout << "You need " << kilograms_for_month << " kg of seeds for a month." << endl;

	return 0;
}
