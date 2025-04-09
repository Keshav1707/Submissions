#include <bits/stdc++.h>
using namespace std;
int solve(long long l, long long r)
{
    if (r <= 3)
    {
        cout << -1 << endl;
        return 0;
    }
    for (long long i = 2; i * i <= r; i++)
    {
        if (r % i == 0)
        {
            cout << i << " " << r - i << endl;
            return 0;
        }
        else if ((r - 1) % i == 0 && l != r)
        {
            cout << i << " " << r - 1 - i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
int main()
{
    long long t, l, r;
    cin >> t;
    while (t-- && cin >> l >> r)
    {
        solve(l, r);
    }
    return 0;
}