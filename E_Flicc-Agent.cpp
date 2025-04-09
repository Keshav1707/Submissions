
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ld long double
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define sz(x) (ll)(x).size()
#define bye cout << endl
#define rr return
#define di(x) \
    ll x;     \
    cin >> x
#define dbg(a) cout << a << endl;

string abc = "abcdefghijklmnopqrstuvwxyz";
const ll MOD = 1000000007;
const ll N = 100005;
int dp[1000005];

#define MAX 100000
#define bitscount 32
int prefix_count[bitscount][MAX];

void findPrefixCount(vector<int> &arr, int n)
{

    for (int i = 0; i < bitscount; i++)
    {

        prefix_count[i][0] = ((arr[0] >> i) & 1);
        for (int j = 1; j < n; j++)
        {
            prefix_count[i][j] = ((arr[j] >> i) & 1);
            prefix_count[i][j] += prefix_count[i][j - 1];
        }
    }
}
void solve()
{
    di(n);
    di(q);
    di(k);
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // for (int i = 0; i < bitscount; i++)
    // {
    //     temp = temp ^ (1 << i);
    // }
    int kinv = ~k;

    for (ll i = 0; i < n; i++)
    {
        // cout << (v[i] & kinv) << " ";
        if ((v[i] & kinv) != 0)
        {
            v[i] = 0;
        }
        // cout << v[i] << " ";
    }

    findPrefixCount(v, n);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int ans = 0;

        for (int i = 0; i < bitscount; i++)
        {

            int x;
            if (l == 0)
                x = prefix_count[i][r];
            else
                x = prefix_count[i][r] - prefix_count[i][l - 1];

            if (x != 0)
                ans = (ans | (1 << i));
        }
        // cout <<ans<<endl;
        bool check = true;
        for (int i = 0; i < bitscount; i++)
        {
            if (((1 << i) & k))
            {
                if (((1 << i) & ans) == 0)
                {
                    check = false;
                    break;
                }
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);

    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}