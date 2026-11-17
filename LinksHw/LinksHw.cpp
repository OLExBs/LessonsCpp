#include <iostream>

using namespace std;

int* createArray(int size) {
    return new int[size];
}

void fillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteArray(int* arr)
{
    delete[] arr;
}

int* removeLastElement(int* arr, int& size) {
    if (size <= 0) return nullptr;

    if (size == 1) {
        delete[] arr;
        size = 0;
        return nullptr;
    }

    int newSize = size - 1;
    int* newArr = new int[newSize];

    for (int i = 0; i < newSize; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    size = newSize;
    return newArr;
}

int* insertElement(int* arr, int& size, int index, int value)
{
    if (index < 0 || index > size) {
        cout << "Error: index out of bounds!\n";
        return arr;
    }
    int newSize = size + 1;
    int* newArr = new int[newSize];

    for (int i = 0; i < index; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[index] = value;

    for (int i = index; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    size = newSize;
    return newArr;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int* pInt = new int;
    double* pDouble = new double;
    float* pFloat = new float;

    *pInt = 10;
    *pDouble = 5.5;
    *pFloat = 2.0f;

    double product = (*pInt) * (*pDouble) * (*pFloat);

    cout << "1." << endl;
    cout << "Integer value: " << *pInt << endl;
    cout << "Double value: " << *pDouble << endl;
    cout << "Float value: " << *pFloat << endl;
    cout << "Product: " << product << endl << endl;

    delete pInt;
    delete pDouble;
    delete pFloat;

    cout << "2." << endl;
    int size = 5;
    int* arr = createArray(size);

    fillArray(arr, size);
    cout << "Initial array (size " << size << "): ";
    printArray(arr, size);

    arr = removeLastElement(arr, size);
    cout << "After removing last element (size " << size << "): ";
    printArray(arr, size);

    arr = insertElement(arr, size, 1, 111);
    cout << "After inserting 111 at index 1 (size " << size << "): ";
    printArray(arr, size);
    deleteArray(arr);

    return 0;
}