#pragma once
#pragma once
#include <iostream>
using namespace std;
template <class T>
class Quick
{
	T *z;
	int x;
public:
	Quick(T *r, int y)
	{

		QuickSort(r, 0, y-1);
	}



	T partition(T *arr, int lo, int hi)
	{
		T pivot = arr[hi];
		T temp;
		int i = arr[lo];
		int j;
		for (j = lo; j < hi; j++)
		{
			if (arr[j] < pivot)
			{
				i++;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		temp = arr[i + 1];
		arr[i + 1] = arr[hi];
		arr[hi] = temp;
		return pivot++;
	}

	/* The main function that implements QuickSort
	arr[] --> Array to be sorted,
	low  --> Starting index,
	high  --> Ending index */
	void QuickSort(T *arr, int low, int high)
	{
		if (low < high)
		{
			/* pi is partitioning index, arr[p] is now
			at right place */
			int pi = partition(arr, low, high);

			// Separately sort elements before
			// partition and after partition
			QuickSort(arr, low, pi - 1);
			QuickSort(arr, pi + 1, high);
		}
	}

	void print(T *z, int n)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			cout << z[i];

		}
	}
};