#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr[], int low, int mid, int high) {
    int n = high - low + 1;
    int* vrr = new int[n];
    int left = low;
    int right = mid + 1;
    int k = 0;

    // Merge both halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            vrr[k++] = arr[left++];
        } else {
            vrr[k++] = arr[right++];
        }
    }

    // Copy remaining elements
    while (left <= mid) {
        vrr[k++] = arr[left++];
    }

    while (right <= high) {
        vrr[k++] = arr[right++];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[low + i] = vrr[i];
    }

    delete[] vrr;
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeArrays(arr, low, mid, high);
}

int main() {
    int arr[] = {22, 44, 12, 1, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (auto i : arr) {
        cout << i << " ";
    }

    return 0;
}
