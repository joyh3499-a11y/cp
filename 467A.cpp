/* The problem name is
 *A. George and Accommodation */

#include <ios>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
        cin >> n;
    int r=0;
    for (int i =0; i<n; i++) {
        int p,q;
        cin >> p >> q;
        if (q-p >=2) {
            r++;
        }
    }
    cout << r << endl;
}