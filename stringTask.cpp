#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;

  int up =0;
    int low = 0;

    for (char c:n) {
        if (isupper(c)) up++;
        else low++;
    }
    if (up > low) {
        for (char &c : n) c = toupper(c);
    } else {
        for (char &c : n) c = tolower(c);
    }

    cout << n << endl;
    return 0;

}