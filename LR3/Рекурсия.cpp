#include "stdafx.h"
#include "iostream"
using namespace std;

int min = 0;
int i = 0;

int *array1(int a)
{
	int *Array = new int[a];
	for (int i = 0; i < a; i++)
	{
		cout << "Input number: ";
		cin >> Array[i];
	}

	min = Array[0];

	return Array;
}

int minArr(int *array1, int size)
{

	if (i == size)
		return min;
	
	if (min > array1[i])
		min = array1[i];

	i++;
	return minArr(array1, size);
}


int main()
{
	int a;
	cout << "Input size: ";
	cin >> a;
	int *Array = array1(a);

	cout << "Min = " << minArr(Array, a) << endl;

	system("pause");
	return 0;
}