#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool latter[26]={false};

    for(int i=0; i< n; i++){
        char c = tolower(s[i]);
        latter[c-'a']= true;
    }
    for (int i=0; i<26 ; i++){
        if(latter[i]==false){
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
