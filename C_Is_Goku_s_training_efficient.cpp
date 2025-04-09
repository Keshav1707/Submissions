#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
int q(int x)
{
    cout << "? " << x << endl;
    fflush(stdout);

    int e;
    cin >> e;
    return e;
}
void solve()
{
    int left = 1;
    int right = 100000000;
    while (right - left > 3)
    {
        int range = right - left;
        int mid1 = left + range / 3;
        int mid2 = right - range / 3;

        int eff1 = q(mid1);
        int eff2 = q(mid2);

        if (eff1 < eff2)
        {
            left = mid1;
        }
        else if (eff1 > eff2)
        {
            right = mid2;
        }
        else
        {
            left = mid1;
            right = mid2;
        }
    }

    int bx = left;
    int be = q(left);

    for (int x = left + 1; x <= right; x++)
    {
        int curr = q(x);
        if (curr > be)
        {
            be = curr;
            bx = x;
        }
    }
    cout << "! " << bx << endl;
    fflush(stdout);
    exit(0);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
