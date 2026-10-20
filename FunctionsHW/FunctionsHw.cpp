#include <iostream>
using namespace std;

// 1
void rectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 2
void factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    cout << "Factorial of " << n << " is " << result << endl;
}

// 3
void isPrime(int n) {
    bool isPrimeFlag = true;
    if (n <= 1) {
        isPrimeFlag = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrimeFlag = false;
                break;
            }
        }
    }
    if (isPrimeFlag) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }
}

// 4
int minmaxArray(int arr[]) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Minimum: " << min << ", Maximum: " << max << endl;
    return 0;
}

// 5
int numcube(int n) {
    int result = n * n * n;
    return result;
}

// 6
bool isPositive(int n) {
    if (n > 0) {
        return true;
    }
    else {
        return false;
    }
}

// 7
int Abs(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

long long dateToDays(int day, int month, int year) {
    long long totalDays = day;

    for (int m = 1; m < month; ++m) {
        totalDays += getDaysInMonth(m, year);
    }

    int y = year - 1;
    totalDays += (long long)y * 365 + (y / 4) - (y / 100) + (y / 400);

    return totalDays;
}

int daysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    long long days1 = dateToDays(d1, m1, y1);
    long long days2 = dateToDays(d2, m2, y2);

    long long diff = days2 - days1;
    if (diff < 0) {
        diff = -diff;
    }

    return diff;
}

// 8
float averageOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// 9
void posNegCount(int arr[], int size) {
    int posCount = 0;
    int negCount = 0;
    int nullCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            posCount++;
        }
        else if (arr[i] < 0) {
            negCount++;
        }
        else {
            nullCount++;
        }
    }

    cout << "Positive count: " << posCount
        << ", Negative count: " << negCount
        << ", Null count: " << nullCount << endl;
}

int main() {
    rectangle(5, 3);
    factorial(10);

    int arr[] = { 31, 0, 33, 488, -51 };
    minmaxArray(arr);

    cout << "Cube of 8 is " << numcube(8) << endl;


    cout << "Is 5 positive? " << (isPositive(5) ? "Yes" : "No") << endl;



    cout << "Days between dates: " << daysBetweenDates(22, 7, 2011, 30, 10, 2026) << endl;

     cout << "Average of array: " << averageOfArray(arr, 5) << endl;


    posNegCount(arr, 5);


}