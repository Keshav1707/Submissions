#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        int a[n];
        for (auto &&i : a)
            cin >> i;
        if (a[0] == a[n - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int x=n-1;
            for (size_t i = 0; i < n - 1; i++)
            {
                cout << a[i] << " ";
            }                /* code */

            cout << endl;
        }
    }
    return 0;
}