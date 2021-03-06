#include "stdafx.h"
#include "iostream"
using namespace std;

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

}

int SumArray(int arr[], const int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

void MinArray(int arr[], const int size)
{
	int min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Min = " << min << endl;
}

void ReverseArray(int arr[], const int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}
}

void main()
{
	const int SIZE = 10;
	int arr[SIZE];

	FillArray(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;

	cout << "Sum = " << SumArray(arr, SIZE) << endl;

	MinArray(arr, SIZE);

	cout << "Reverse: ";

	ReverseArray(arr, SIZE);

	system("pause");
}

