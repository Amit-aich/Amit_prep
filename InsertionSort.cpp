#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; --j) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {4, 12, 11 ,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    return 0;
}
