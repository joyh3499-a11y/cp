#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string j,k;
    int groups=0;
    for(int i=0; i<n; i++)
    {
        cin >> j;
        if(i==0)
        {
            groups = 1;
        }
        else if (j != k)
        {
            groups++;
        }
        k =j;
    }
    cout << groups;
}
