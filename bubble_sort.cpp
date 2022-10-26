#include <iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		bool sort = true;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				sort = false;
			}
		}
		if (sort)
			break;
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
    int arr[] = { 50, 70, 30, 20, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sort\n";
    print(arr, n);
    bubbleSort(arr, n);
    cout << "Array after sort\n";
    print(arr, n);

}