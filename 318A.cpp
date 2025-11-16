/*A. Even Odds */
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    long long even = 0;
    long long  odd = 0;
    long long ans=0;
    odd = (n + 1) / 2;
    even = n / 2;
    if (k <= odd) {
        ans = 2*k - 1;
    }
    else {
        ans = 2*(k - odd);
    }
    cout << ans << endl;
}
