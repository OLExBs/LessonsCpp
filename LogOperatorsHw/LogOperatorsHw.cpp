#include <iostream>
using namespace std;
int main()
{
	//1

	string a = "Ukraine capital city is Kyiv", b = "France capital city is Paris",
		c = "Germany capital city is Berlin", d = "Japan capital city is Tokyo", e = "Poland capital city is Warsaw";
	int country;
	cout << "Enter a number of country which capital city you want to know(1-5):\n Ukraine (1), France (2), Germany (3), Japan (4), Poland (5): ";
	cin >> country;

	switch (country)
	{
	case 1:
		cout << a << endl;
		break;
	case 2:
		cout << b << endl;
		break;
	case 3:
		cout << c << endl;
		break;
	case 4:
		cout << d << endl;
		break;
	case 5:
		cout << e << endl;
		break;
	default:
		cout << "Invalid input!" << endl;
	}

		
		// 2
		int day;
		cout << "Enter a number of day of the week(1-7): ";
		cin >> day;
		switch (day)
		{
		case 1:
			cout << "Monday work day" << endl;
			break;
		case 2:
			cout << "Tuesday work day" << endl;
			break;
		case 3:
			cout << "Wednesday work day again..." << endl;
			break;
		case 4:
			cout << "Thursday work day (when is the weekend?)" << endl;
			break;
		case 5:
			cout << "Friday work day (Tomorrow is the weekend!)" << endl;
			break;
		case 6:
			cout << "Saturday and that is the weekend!" << endl;
			break;
		case 7:
			cout << "Sunday and that is the weekend!" << endl;
			break;
		default:
			cout << "Invalid input!" << endl;
		}
	
	//	// 3
	//	int course;
	//	cout << "Enter a number of course(1-North, 2-South, 3-East, 4-West): ";
	//	if (course == 1)
	//	{
	//		cout << "South course is backwards" << endl;
	//	}
	//	else if (course == 2)
	//	{
	//		cout << "North course is backwards" << endl;
	//	}
	//	else if (course == 3)
	//	{
	//		cout << "West course is backwards" << endl;
	//	}
	//	else if (course == 4)
	//	{
	//		cout << "East course is backwards" << endl;
	//	}
	//	else
	//	{
	//		cout << "Invalid input!" << endl;
	//	}
	//
	//	// 4
	//	int animal;
	//	cout << "Enter a number of animal(1-Cat, 2-Dog, 3-Horse, 4-Cow, 5-Eagle, 6-Wolf, 7-Bear): ";
	//	switch (animal)
	//	{
	//	case 1:
	//		cout << "Cat is carnivorous" << endl;
	//		break;
	//	case 2:
	//		cout << "Dog is carnivorous" << endl;
	//		break;
	//	case 3:
	//		cout << "Horse is herbivorous" << endl;
	//		break;
	//	case 4:
	//		cout << "Cow is herbivorous" << endl;
	//		break;
	//	case 5:
	//		cout << "Eagle is carnivorous" << endl;
	//		break;
	//	case 6:
	//		cout << "Wolf is carnivorous" << endl;
	//		break;
	//	case 7:
	//		cout << "Bear is carnivorous" << endl;
	//		break;
	//	default:
	//		cout << "Invalid input!" << endl;
	//	}
	//	
	//	// 7
	//	int x = 0, y = 0, l = 0;
	//	cout << "Enter a number: ";
	//	cin >> x;
	//	cout << "Enter another number: ";
	//	cin >> y;
	//	if (x != y)
	//	{
	//		l = y;
	//		y = x;
	//		x = l;
	//		cout << "Numbers changed. x = " << x << ", y =" << y << endl;
	//	}
	//	else
	//	{
	//		cout << "The numbers are equal." << endl;
	//	}
	//
	//	// 8 
	//	int as;
	//	cin >> as;
	//
	//	int firstDig = as / 100;
	//	int secondDig = (as / 10) % 10;
	//	int lastDig = as % 10;
	//
	//	int sum = firstDig + secondDig + lastDig;
	//
	//	cout << "Count of digits: 3" << endl;
	//	cout << "Sum of digits: " << sum << endl;
	//	cout << firstDig << "  " << lastDig << endl;
	//
	//
	//	// 9
	//
	//
	//	
	//	int hours, minutes, seconds;
	//	cout << "Enter hours, minutes and seconds: ";
	//	cin >> hours >> minutes >> seconds;
	//
	//	if (hours >= 0 && hours < 24 &&
	//		minutes >= 0 && minutes < 60 &&
	//		seconds >= 0 && seconds < 60) {
	//			cout << "Time is valid" << endl;
	//	}
	//	else{
	//			cout << "Time is invalid" << endl;
	//	}к
	//
	//	// 10
	//
	//	int hourss;
	//	cout << "Введіть годину (0-23): ";
	//	cin >> hourss;
	//
	//	if (hourss >= 0 && hourss <= 5) {
	//		cout << "good night" << endl;
	//	}
	//	else if (hourss >= 6 && hourss <= 11) {
	//		cout << "good morning" << endl;
	//	}
	//	else if (hourss >= 12 && hourss <= 17) {
	//		cout << "good day" << endl;
	//	}
	//	else if (hourss >= 18 && hourss <= 23) {
	//		cout << "good evening" << endl;
	//	}
	//	else {
	//			cout << "Invalid input (need to be from 0 to 23)" << endl;
	//	}
	//	
	//	// 11
	//	double a, b, c;
	//	cout << "Enter three numbers: ";
	//	cin >> a >> b >> c;
	//
	//	double minimum;
	//
	//	if (a <= b && a <= c) {
	//		minimum = a;
	//	}
	//	else if (b <= a && b <= c) {
	//		minimum = b;
	//	}
	//	else {
	//		minimum = c;
	//	}
	//
	//	cout << "Minimum: " << minimum << endl;
	//
	//}