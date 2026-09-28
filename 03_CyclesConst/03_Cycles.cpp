#include<iostream>
using namespace std;

int main()
{
	//enum countries { Ukraine = +380, USA = 1, France = 33, Italy = 39, Australia = 61 };


	//enum coins{penny = 1, nickel = 5, dime = 10, quarter = 25, half = 50, dollar_coin = 100 };


	//coins c;
	//int a;
	//int coin;
	//cout << "Enter value of American coin: ";
	//cin >> coin;

	//switch (coin)
	//{
	//case penny:cout << "penny = 1 coin" << endl;
	//	break;
	//case nickel:cout << "nickel = 5 coins" << endl;
	//	break;
	//case dime:cout << "dime = 10 coins" << endl;
	//	break;
	//case quarter:cout << "quarter = 25 coins" << endl;
	//	break;
	//case half:cout << "half = 50 coins" << endl;
	//	break;
	//case dollar_coin:cout << "dollar_coin = 100 coins" << endl;
 //		break;
	//default:
	//	break;
	//}





	////1
	//int i = 0;
	//while (i != 100)
	//{
	//	i++;
	//	cout << i << endl;
	//}


	////2
	//int a = 0;
	//int o = 0;
	//while (o != 200)
	//{
	//	o++;
	//	if (o % 2 == 0)
	//	{
	//		a++;
	//		cout << o << endl;
	//	} 
	//}
	//	cout << "Number of even numbers: " << a << endl;



	////3
	//	int n = 5, d = 0, sum = 0, ipt = 0;
	//	while (d != n)
	//	{
	//		cout << "Enter a number: ";
	//		cin >> ipt;
	//		d++;
	//		if (ipt % 2 == 0)c
	//		{
	//			sum += ipt;
	//		}
	//	}
	//	cout << "Sum of even numbers: " << sum << endl;



	//4 
		int x = 0, y = 0, l = 0;
		while (l != 10)
		{
			cout << "Enter a number: ";
			cin >> x;
			l++;
			y += x;
			
		}
		
		cout << "Sum of 10 numbers: " << y << endl;
		cout << "Average of 10 numbers: " << y / 10.f << endl;


	//}

	//
	////5
	//int h = 100;
	//do
	//{
	//	cout << h << endl;
	//	h--;
	//} 
	//while (h!=0);
	//

	////6
	//int b = 0, c = 0, s = 0;
	//do
	//{
	//	cin >> b;
	//	c += b;
	//	s++;
	//}
	//while (s!=7);
	//cout << "Sum of 7 numbers: " << c << endl;


	////7
	//int f = 0;
	//for (int j = 1; j <= 12; j++)
	//{
	//	f += j;
	//}
	//cout << "Clock banged " << f << " times" << endl;


	//// 8 
	//int k = 0, l = 0;
	//for (int g = 0; ; g++)
	//{ 
	//	cin >> k;
	//	l += k;
	//	if (k == 0)
	//	{
	//		cout << "Sum of numbers: " << l << endl;
	//		break;
	//	}

	//}

}