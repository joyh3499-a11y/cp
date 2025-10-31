#include <bits/stdc++.h>
using namespace std;
int main() {
     string s;
     cin >> s;

     for (int i=0; i<s.size(); i++) {
          if (islower(s[0])) {
               s[0]= toupper(s[0]);
          }
     }
     cout << s ;
}