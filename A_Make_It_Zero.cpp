#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        int x;
        for (size_t i = 0; i < n; i++)
            cin >> x;
        if (n & 1)
        {
            cout << "4" << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
            ;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }
    return 0;
}