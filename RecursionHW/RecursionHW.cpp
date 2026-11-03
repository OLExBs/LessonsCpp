#include <iostream>

using namespace std;

int Pow(int num, int step) {
    if (step == 0) {
        return 1;
    }
    return num * Pow(num, step - 1);
}

void stars(int n) {
    if (n <= 0) {
        return;
    }
    cout << "*";
    stars(n - 1); 
}

int SumFrom(int a, int b) {
    if (a > b) {
        return 0;
    }
    return a + SumFrom(a + 1, b);
}

int main() {

    cout << Pow(2, 3) << endl;


    cout << "Enter number of stars: ";
    int n;
    cin >> n;

    stars(n);         
    cout << endl;    

    
    int a, b;
    cout << "Enter first number to sum from: ";
    cin >> a;
    cout << "Enter second number to sum to: ";
    cin >> b;
    cout << "Sum = " << SumFrom(a, b) << endl;

    return 0;
}