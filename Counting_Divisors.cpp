#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ans += 2;
            if (n / i == i)
                ans--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        solve();
}