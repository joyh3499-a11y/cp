#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin >> n;
    int sum = 0;
    for (int i = 0 ; i < n ; i++) {
        int m;
        cin >> m;
       sum = sum + m;
    }
    if (sum > 0) {
        cout <<"Hard" << endl;
    }
    else {
        cout << "EASY" << endl;
    }
}