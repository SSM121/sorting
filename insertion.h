#pragma once
#pragma once
#include <iostream>
using namespace std;
template <class T>
class Insertion
{
	T *z;
	int x;
public:
	Insertion(T *r, int y)//insertion sort will be ran intially
	{

		InsertionSort(z, y);
	}

	int InsertionSort(T *z, int x)//runs the insertion algorithm on the list
	{

		int i, key, j;
		for (i = 1; i < n; i++)
		{
			key = arr[i];
			j = i - 1;

			/* Move elements of arr[0..i-1], that are
			greater than key, to one position ahead
			of their current position */
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	void print(T *z, int n)//prints the sorted list.
	{
		int i;
		for (i = 0; i < n; i++)
		{
			cout << z[i] << " ";

		}
	}
};