#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> a(n);
        a[0] = 1;
        long long prev = b[0];
        int cur = 1;

        for (int i = 1; i < n; i++) {
            long long diff = b[i] - prev;
            if (diff == i + 1) {
                cur++;
                a[i] = cur;
            } else {
                a[i] = a[i - 1];
            }
            prev = b[i];
        }

        for (int i = 0; i < n; i++)
            cout << min(a[i], n) << " ";
        cout << "\n";
    }
    return 0;
}
