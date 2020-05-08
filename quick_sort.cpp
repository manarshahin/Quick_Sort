#include <iostream>
#include<Math.h>
using namespace std;
void Quicksort(int arr[],int low,int high)
{
	int pivot = arr[low + (high - low) / 2];
	int i = low;
	int j = high;
	while (i<=j)
	{
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if(i<=j)
		{ 
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	if (low < j)
		Quicksort(arr,low,j);
	if (high > i)
		Quicksort(arr,i,high);
}
void print(int arr[],int length)
{
	Quicksort(arr, 0, length-1);
	for (int i = 0;i < length;i++) 
	{
		cout << arr[i]<<" " ;
	}
}
int main()
{
	int Arr[] = { 19, 6, 9, 0, 3, 5, 17, 22};
	int n = sizeof(Arr) / sizeof(Arr[0]);
	Quicksort(Arr,0,n-1);
	cout << "Sorted array:"<<endl;
	print(Arr,8);
	return 0;
}
