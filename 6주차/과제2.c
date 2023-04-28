#include <stdio.h>

void swap(int *ar, int i, int j);

void main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	int arr[100] = {1};
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		swap(arr, a, b);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void swap(int *ar, int i, int j)
{
	for (int k = 0; k <= (j-i) / 2; k++)
	{
		int temp = *(ar + i - 1);
		*(ar + i - 1) = *(ar + j - i);
		*(ar + j - i) = temp;
		i++;
		j--;
	}
}
