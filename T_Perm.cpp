#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int MOD = 1e9 + 7;
vector<int> numbersWithTwo;
bool containsTwoInTernary(int n)
{
    while (n > 0)
    {
        if (n % 3 == 2)
        {
            return true;
        }
        n /= 3;
    }
    return false;
}

void solve()
{
    di(x);
    if (x % 3 == 0 || x % 3 == 1)
    {
        for (int i = 1; i <= x; i++)
        {
            if ((i) % 3 == 1)
            {
                cout << i << " ";
            }
            else if ((i) % 3 == 2)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << i - 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << 5 << " " << 4 << " " << 3 << " " << 2 << " " << 1 << " ";
        for (int i = 6; i <= x; i++)
        {
            if (i % 3 == 0)
            {
                cout << i + 2 << " ";
            }
            else if (i % 3 == 1)
            {
                cout << i << " ";
            }
            else
            {
                cout << i - 2 << " ";
            }
        }
        cout << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;

    for (int i = 1; i <= 200000; ++i)
    {
        if (containsTwoInTernary(i))
        {
            numbersWithTwo.push_back(i);
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}