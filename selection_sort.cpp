#include <iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[], int n) {
    int min;
    for (int i = 0; i < n ; i++) {
        min = i;
        for (int j = 0; j < n - 1; j++){
            if (arr[min] < arr[j]) {
                swap(arr[min], arr[j]);
            }
        }
    }
}
void print(int arr[], int n) {
    cout <<"[";
    for (int i = 0; i < n ; i++) {
        cout << arr[i]<<" ";
        }
    cout << "]\n";
}


int main()
{
    int arr[] = { 50, 70, 30, 20, 28 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sort\n";
    print(arr, n);
    selectionSort(arr, n);
    cout << "Array after sort\n";
    print(arr, n);

}

