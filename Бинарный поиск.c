#include <stdio.h>

int binarysearch(int a, int mass[], int n)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (a < mass[middle])
			high = middle - 1;
		else if (a > mass[middle])
			low = middle + 1;
		else
			return middle;
	}
	return -1;
}

int main()
{
	int arr[8] = {3, 10, 55, 73, 76, 100, 102, 150};

	int result = binarysearch(100, arr, 8);

	return 0;
}
