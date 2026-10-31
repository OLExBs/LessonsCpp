#include <iostream>
using namespace std;
void InitArray(int arr[], int size)

{

	for (int i = 0; i < size; i++)

	{

		arr[i] = rand() % 100;

	}

}

void ShowArray(int arr[], int size)

{

	for (int i = 0; i < size; i++)

	{

		cout << arr[i] << " ";

	}

}

int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			swap(arr[i], arr[index]);
		}
	}
}


void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;
	int left = 0, right = size - 1, temp;
	do {
		for (int j = 0; j >= left; j--)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				index = j;
			}
			left = index + 1;

			for (j = left; j <= right; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					index = j;
				}
			}
		}
	} 
	while (left < right);
}

void QuickSort()
{
	
}
int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size] = { 5, 3, 8, 6, 2, 7, 4, 1, 9, 0 };
	InitArray(arr, size);
	ShowArray(arr, size);


	int searchKey, indexSearch; 
	cout << "Enter search key: "; cin >> searchKey;
	indexSearch = LinearSearch(arr, size, searchKey);
	if (indexSearch != -1)
	{
		cout << "Element found at index: " << indexSearch << endl;
	}
	else
	{
		cout << "Element not found in the array." << endl;
	}

	SelectionSort(arr, size);
	ShowArray(arr, size);

}