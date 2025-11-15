/*  B. Drinks */
#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <=n ; i++) {
        int pi;
        cin >> pi;
        sum += pi;
    }
    cout << sum/n << endl;
}