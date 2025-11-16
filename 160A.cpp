/* A. Twins */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++) {
        x += arr[i];
        y++;
        if (x > total - x) {
            break;
        }
    }

    cout << y << endl;
}
