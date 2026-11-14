
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

void AddRowEnd(int** arr, int rows, int cols) 
{


}

int main()
{
	int rows = 5;
	int cols = 6;
	cout << "Enter new rows: ";
	cin >> rows;
	cout << "Enter new cols: ";
	cin >> cols;
	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

    InitArray(arr, rows, cols);
	ShowArray(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}


