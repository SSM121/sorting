#pragma once
#include <iostream>
using namespace std;
template <class T>
class Selection
{
	T *z;
	int x;
public:
	Selection(T *r, int y)//runs a selection sort
	{

		SelectionSort(z, y);
	}

	int SelcectionSort(T *z, int x)//runs the selection sort algorithm to sort
	{
		int i, j;
		int swapped = 1;
		for (j = 0; j < x - 1; j++) 
		{
			int iMin = j;
			for (i = j + 1; i < n; i++) {
				if (a[i] < a[iMin]) {
					int iMin = i;
				}
			}

			if (iMin != j) {
				ztemp = z[j];
				z[j] = z[imin];
				z[imin] = ztemp;
				swapped = 1;
			}
		}
		return 1;
	}


	void print(T *z, int n)//prints sorted list
	{
		int i;
		for (i = 0; i < n; i++)
		{
			cout << z[i] << " ";

		}
	}
};