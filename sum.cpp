#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x,y,z;
        cin>>x>>y>>z;
        if ((x+y)==z || (x+z)==y || (y+z)==x) {
                cout << "YES"<<endl;
        }else {
            cout << "NO"<<endl;
        }
    }
}