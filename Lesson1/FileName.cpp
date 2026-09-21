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


	cout << " 5.\n";
	
	int a, b, c;
	
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	cout << "Numbers entered: " << a << ", " << b << ", " << c << endl;
	cout << "Sum of numbers: " << a + b + c << endl;


	cout << " 6.\n";
	float a6, b6;
	cout << "Enter first number: ";
	cin >> a6;
	cout << "Enter second number: ";
	cin >> b6;
	
	cout << "Average of numbers: " << (a6 + b6) / 2.0 << endl;


	cout << " 7.\n";
	float km;
	cout << "Enter distance in kilometers: ";
	cin >> km;
	cout << "Distance in meters: " << km * 1000 << endl;


	cout << " 8.\n";
	const int PenCost = 16, NoteCost = 24,  PencilPackCost= 32,  MarkerCost = 48;
	int countPen, countNote, countPencilPack, countMarker;

	cout << "Enter number of pens that you bought(cost 16 грн): ";
	cin >> countPen;
	cout << "Enter number of notebooks that you bought(cost 24 грн): ";
	cin >> countNote;
	cout << "Enter number of pencil packs that you bought(cost 32 грн): ";
	cin >> countPencilPack;
	cout << "Enter number of markers that you bought(cost 48 грн): ";
	cin >> countMarker;

	cout << "Total pens cost: " << countPen * PenCost << " grn" << endl;
	cout << "Total notebooks cost: " << countNote * NoteCost << " grn" << endl;
	cout << "Total pencil packs cost: " << countPencilPack * PencilPackCost << " grn" << endl;
	cout << "Total markers cost: " << countMarker * MarkerCost << " grn" << endl;
	cout << " Total cost of all items: " << (countPen * PenCost) + (countNote * NoteCost) + (countPencilPack * PencilPackCost) + (countMarker * MarkerCost) << " грн" << endl;


	cout << " 9.\n";
	float kv;
	cout << "Enter your number: ";
	cin >> kv;
	cout << "Square of your number: " << kv * kv << endl;

	cout << " 10.\n";
	float days10;
	const int mins_in_day = 1440;
	cout << "Enter number of days: ";
	cin >> days10;
	cout << "Total minutes in " << days10 << " days: " << days10 * mins_in_day << endl;

	return 0;
}