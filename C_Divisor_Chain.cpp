#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    int c = 1;
    if(n&1)cout<<endl;
    while (t-- && cin >> n)
    {
        int c = 1;
        while (n != c && ~(n & 1))
        {
            cout << (n - c) << " ";
            n = n - c;
            c = c << 1;
            // cout << c << " ";
        }
        cout << endl;
        
    }
    return 0;
}