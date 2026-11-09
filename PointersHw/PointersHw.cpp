#include <iostream>
using namespace std;

void swapMinMax(int* ptr, int size) {
    cout << "Original array: ";
    for (int j = 0; j < size; j++) {
        cout << *(ptr + j) << " ";
    }
    cout << endl;

    int* minPtr = ptr;
    int* maxPtr = ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) < *minPtr) {
            minPtr = (ptr + i);
        }
        if (*(ptr + i) > *maxPtr) {
            maxPtr = (ptr + i);
        }
    }

    int temp = *minPtr;
    *minPtr = *maxPtr;
    *maxPtr = temp;

    cout << "Array after swapping min and max: " << endl;
    for (int j = 0; j < size; j++) {
        cout << *(ptr + j) << " ";
    }
    cout << endl << endl;
}

void swapEvenOdd(int* ptr, int size) {
    cout << "Original array: ";
    for (int j = 0; j < size; j++) {
        cout << *(ptr + j) << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i += 2) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
    }

    cout << "Array after swapping even/odd indices: " << endl;
    for (int j = 0; j < size; j++) {
        cout << *(ptr + j) << " ";
    }
    cout << endl << endl;
}

int* getMinPointer(int* a, int* b) {
    if (*a < *b) {
        return a;
    }
    return b;
}

void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void replaceNegativesWithZero(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) < 0) {
            *(ptr + i) = 0;
        }
    }
}

void swapReferences(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    const int size = 5;

    int arr1[size] = { 4, 0, -3, 5, -1 };
    swapMinMax(arr1, size);

    int arr2[size] = { 10, 20, 30, 40, 50 };
    swapEvenOdd(arr2, size);

    int num1 = 25, num2 = 14;

    cout << "Before: num1 = " << num1 << ", num2 = " << num2 << endl;
    int* pMin = getMinPointer(&num1, &num2);
    *pMin += 10;
    cout << "After adding 10 to min pointer: num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    int x = 5, y = 99;

    cout << "Before swapValues: x = " << x << ", y = " << y << endl;
    swapValues(&x, &y);
    cout << "After swapValues: x = " << x << ", y = " << y << endl << endl;

    const int arrSize = 6;
    int arr3[arrSize] = { 4, -2, 0, 5, -8, 12 };
    cout << "Original arr3: ";
    for (int j = 0; j < arrSize; j++) {
        cout << arr3[j] << " ";
    }
    cout << endl;

    replaceNegativesWithZero(arr3, arrSize);

    cout << "After replaceNegativesWithZero: ";
    for (int j = 0; j < arrSize; j++) {
        cout << arr3[j] << " ";
    }
    cout << endl << endl;

    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Original matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS; i++) {
        swapReferences(matrix[i][0], matrix[i][1]);
    }

    cout << "Matrix after swapping elements in rows:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}