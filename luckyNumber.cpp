#include <bits/stdc++.h>
using namespace std;
bool lucky(int n) {
    while (n>0) {
        int t = n%10;
        if (t != 4 && t != 7)
            return false;
        n/=10;
    }
    return true ;
}


int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (lucky(i) &&  n%i == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}