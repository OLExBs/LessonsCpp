#include <iostream>
#include <iomanip>

using namespace std;

void InitArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}

void ShowArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void AddRowBegin(int**& arr, int& rows, int cols, const int* newRowData)
{
    int** newArr = new int* [rows + 1];

    newArr[0] = new int[cols];
    for (int j = 0; j < cols; j++) {
        newArr[0][j] = newRowData[j];
    }

    for (int i = 0; i < rows; i++) {
        newArr[i + 1] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    rows++;
}

void DeleteRowBegin(int**& arr, int& rows)
{
    if (rows <= 0) return;

    delete[] arr[0];

    int** newArr = new int* [rows - 1];

    for (int i = 1; i < rows; i++) {
        newArr[i - 1] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    rows--;
}

void DeleteRowAt(int**& arr, int& rows, int index)
{
    if (index < 0 || index >= rows) {
        cout << "Error: index does not exist!\n";
        return;
    }

    delete[] arr[index];

    int** newArr = new int* [rows - 1];

    int newIndex = 0;
    for (int i = 0; i < rows; i++) {
        if (i == index) continue;
        newArr[newIndex++] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    rows--;
}

int main()
{
    int rows = 4;
    int cols = 4;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    InitArray(arr, rows, cols);
    cout << "Initial array:\n";
    ShowArray(arr, rows, cols);

    int* newRow = new int[cols] {99, 99, 99, 99};
    AddRowBegin(arr, rows, cols, newRow);
    cout << "\nAfter adding a row at the beginning:\n";
    ShowArray(arr, rows, cols);

    DeleteRowBegin(arr, rows);
    cout << "\nAfter deleting the first row (Task 2):\n";
    ShowArray(arr, rows, cols);

    cout << "\nDeleting row at index 1 (Task 3):\n";
    DeleteRowAt(arr, rows, 1);
    ShowArray(arr, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] newRow;

    return 0;
}