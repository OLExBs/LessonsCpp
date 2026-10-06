#include <iostream>
using namespace std;

int main() {



    //// 1
    //int i = 14;
    //while (i <= 123) {
    //    cout << i << " ";
    //    i++;
    //}
    //cout << "\n\n";

    //// 2
    //
    //int i = 1;
    //while (i <= 100) {
    //    cout << i << " ";
    //    i += 2;
    //}
    //cout << "\n\n";

 //   // 3
 //   int n;
 //   cout << "Enter the count of numbers N (N > 0): ";
 //   cin >> n;
 //   int c3 = 0, neg = 0;
	//int x3;
 //   while (c3 < n) {
 //       cout << "Enter number " << c3 + 1 << ": ";
 //       cin >> x3;
 //       if (x3 < 0) {
 //           neg++;
 //       }
 //       c3++;
 //   }
 //   cout << "Count of negative numbers: " << neg << "\n\n";

    //// 4
    //int c4 = 0;
    //double x4, pr4 = 1.0, s4 = 0.0;
    //while (c4 < 8) {
    //    cout << "Enter number " << c4 + 1 << ": ";
    //    cin >> x4;
    //    pr4 *= x4;
    //    s4 += x4;
    //    c4++;
    //}
    //cout << "Product of 8 numbers: " << pr4 << endl;
    //cout << "Average: " << s4 / 8.0 << "\n\n";

    //// 5
    //int h = 100;
    //do {
    //    cout << h << " ";
    //    if (h == 2) {
    //        h = 1;
    //    }
    //    else {
    //        h -= 2;
    //    }
    //} while (h >= 1);
    //cout << "\n\n";

    //// 6
    //int c6 = 0;
    //double x6, pr6 = 1.0;
    //do {
    //    cout << "Enter number " << c6 + 1 << ": ";
    //    cin >> x6;
    //    pr6 *= x6;
    //    c6++;
    //} while (c6 < 5);
    //cout << "Product of 5 numbers: " << pr6 << "\n\n";

    //// 7
    //int sw7 = 0;
    //int i7 = 4;
    //while (i7 < 50) {
    //    if (i7 % 4 == 0) sw7 += i7;
    //    i7++;
    //}
    //cout << "Sum : " << sw7 << endl;

    //int s7 = 0;
    //int j7 = 4;
    //do {
    //    if (j7 % 4 == 0) s7 += j7;
    //    j7++;
    //} while (j7 < 50);
    //cout << "Sum: " << s7 << "\n\n";

 //   // 8
 //   int lim;
	//int i = 0;
 //   cout << "Enter a number: ";
 //   cin >> lim;
 //   if (lim >= 0) {
 //       i = 0;
 //       while (i <= lim) {
 //           cout << i << " ";
 //           i++;
 //       }
 //   }
 //   else {
 //       i = 0;
 //       while (i >= lim) {
 //           cout << i << " ";
 //           i--;
 //       }
 //   }
 //   cout << "\n\n";

    //// 9
    //int a, b;
    //cout << "Enter the first range limit: ";
    //cin >> a;
    //cout << "Enter the second range limit: ";
    //cin >> b;
    //int i = 0;

    //if (a > b) {
    //    int tmp = a;
    //    a = b;
    //    b = tmp;
    //}

    //cout << "Even numbers in range [" << a << "; " << b << "]:\n";
    //i = a;
    //while (i <= b) {
    //    if (i % 2 == 0) cout << i << " ";
    //    i++;
    //}
    //cout << endl;

    //cout << "Odd numbers in range [" << a << "; " << b << "]:\n";
    //i = a;
    //while (i <= b) {
    //    if (i % 2 != 0) cout << i << " ";
    //    i++;
    //}
    //cout << endl;

    //cout << "Numbers divisible by 7 in range [" << a << "; " << b << "]:\n";
    //i = a;
    //while (i <= b) {
    //    if (i % 7 == 0) cout << i << " ";
    //    i++;
    //}
    //cout << "\n\n";

 //   // 10
 //   int st10, en10;
	//int i = 0;
 //   cout << "Enter the first range limit: ";
 //   cin >> st10;
 //   cout << "Enter the second range limit: ";
 //   cin >> en10;

 //   if (st10 > en10) {
 //       int tmp = st10;
 //       st10 = en10;
 //       en10 = tmp;
 //   }

 //   int s10 = 0;
 //   i = st10;
 //   while (i <= en10) {
 //       s10 += i;
 //       i++;
 //   }
 //   cout << "Sum of all numbers in range [" << st10 << "; " << en10 << "]: " << s10 << "\n\n";

//    // 11
//    double v, s11 = 0;
//    cout << "Enter numbers (enter 0 to finish):\n";
//    do {
//        cin >> v;
//        s11 += v;
//    } while (v != 0);
//
//    cout << "Sum of entered numbers: " << s11 << endl;
//
//    return 0;
//}