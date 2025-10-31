#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    set<char>set;
    for (int i=0; i<n.size(); i++) {
        set.insert(n[i]);
    }
    if (set.size()%2==0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
