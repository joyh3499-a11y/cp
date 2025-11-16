//A. Is your horseshoe on the other hoof?//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dup = 0;
    if(a == b || a == c || a == d) {
        dup++;
    }
    if(b == c || b == d) {
        dup++;
    }
    if(c == d) {
        dup++;
    }

    cout << dup << endl;
}
