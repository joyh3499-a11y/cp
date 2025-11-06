#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    y++;

    while (true) {
        int year = y;
        bool seen[10] = {0};
        bool check = true;

        while(year > 0) {
            int d = year % 10;
            if(seen[d]) {
                check = false;
                break;
            }
            seen[d] = true;
            year /= 10;
        }

        if(check) {
            cout << y << endl;
            break;
        }

        y++;
    }

    return 0;
}
