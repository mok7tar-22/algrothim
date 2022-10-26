#include <iostream>
#include<algorithm>
using namespace std;
void insertionSort(int arr[], int n) {
	int item, j;
	for (int i = 1; i < n; i++)
	{
		item = arr[i];
		j = i - 1;
		while (j>=0 && arr[j]>item)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = item;
	}
}
void print(int arr[], int n) {
	cout << "[";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "]\n";
}


int main()
{
	int arr[] = { 50, 70, 30, 20, 10,22 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sort\n";
	print(arr, n);
	insertionSort(arr, n);
	cout << "Array after sort\n";
	print(arr, n);

}