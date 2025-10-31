#include <iostream>
using namespace std;
int binserch(int arr[], int tar, int size) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > tar) {
            end = mid - 1;
        }else if (arr[mid] < tar) {
            start = mid + 1;
        }else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int tar = 4;
    for (int i = 0; i < size; i++) {
        cout << "Array element : "<< arr[i] << endl;
    }
    int result = binserch(arr, tar, size);
    if (result != -1) {
        cout << "Target element found at index : " << result << endl;
    }else {
        cout << "Target element not found" << endl;
    }
    return 0;
}