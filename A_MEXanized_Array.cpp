#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, x;
    cin >> t;
    while (t-- && cin >> n >> k >> x)
    {
        if (k > n || k - 1 > x)
            cout << -1 << endl;
        else
        {
            int sum = k * (k - 1) / 2;
            n = n - k;
            while (n--)
            {
                if (k == x)
                    sum += x - 1;
                else
                    sum += x;
            }
            cout << sum << endl;
        }
    }
    return 0;
}