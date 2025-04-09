#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        if (n - (n / m) - (n % m != 0) <= k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        // int f = n - (n / m)-((n%m)!=0?1:0);
        // cout << f << " " << k << endl;
        // if (f > k)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}