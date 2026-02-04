#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        char lower = tolower(c);


        if (lower != 'a' && lower != 'o' && lower != 'y' &&
                lower != 'e' && lower != 'u' && lower != 'i')
        {
            cout << "." << lower;
        }
    }

    return 0;
}
