#pragma once
#include <iostream>
using namespace std;
template <class T>
class Bubble
{
	T *z;
	int x;
public:
	Bubble(T *z, int y)//bubblesorts the list
	{
	
		Bubblesort(z, y);
	}
/*procedure bubbleSort( A : list of sortable items )
  n = length(A)
  repeat
    swapped = false
    for i = 1 to n-1 inclusive do
      if A[i-1] > A[i] then
        swap( A[i-1], A[i] )
        swapped = true
      end if
    end for
  until not swapped
end procedure*/
	int Bubblesort(T *z, int x)
	{
		int i;
		int swapped = 1;
		T ztemp;
		while (swapped)
		{
			swapped = 0;
			for (i = 0; i < x - 1; i++)
			{
				if (z[i - 1] > z[i])
				{
					ztemp = z[i];
					z[i] = z[i-1];
					z[i-1] = ztemp;
					swapped = 1;
				}
			}
		}
		return 1;
	}
	


	
	void print(T *z, int n)//prints the list i  sorted form
	{
		int i;
		for (i = 0; i < n; i++)
		{
			cout << z[i] << " ";
			
		}
	}
};