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
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
int minDifferenceConsecutive(int a, int l)
{
    int n = l - a + 1; // Total number of elements
    int totalSum = (n * (a + l)) / 2;

    // Compute mid points
    int mid1 = n / 2;
    int mid2 = (n + 1) / 2;

    // Calculate sums and differences for possible optimal splits
    auto calculateDiff = [&](int k)
    {
        int leftSum = k * (2 * a + k - 1) / 2;
        int rightSum = totalSum - leftSum;
        return std::abs(leftSum - rightSum);
    };

    // Compute minimum difference for both possible split points
    int diff1 = calculateDiff(mid1);
    int diff2 = calculateDiff(mid2);

    return std::min(diff1, diff2);
}

void solve()
{
    di(n);
    di(k);
    int l = k + n;
    cout << minDifferenceConsecutive(k, l) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
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