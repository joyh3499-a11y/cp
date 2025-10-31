#include <bits/stdc++.h>
using namespace std;
int main() {
    string p;
    cin >> p;

   if (p.find("0000000")!=string::npos || p.find("1111111")!=string::npos) {
       cout << "YES";
   }else {
       cout << "NO" ;
   }
}