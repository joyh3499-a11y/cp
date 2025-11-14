/* The problem name is
 *A. Magnets */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string m,k;
    int count=1;
    cin >> m;
    for(int i=1;i<n;i++) {
        cin >> k;
        if (k!=m) {
            count++;
        }
        m=k;
    }
    cout<<count;
}