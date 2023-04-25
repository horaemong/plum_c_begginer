//#include <stdio.h>
//
//void add1(int ar[], int size);
//void add2(int* parr, int size);
//
//void main()
//{
//	int arr[3] = { 1,2,3 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	add1(arr, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	add2(arr, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//void add1(int ar[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		ar[i] += 10;
//	}
//}
//
//void add2(int* parr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(parr+i) += 10;
//	}
//}
