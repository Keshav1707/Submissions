#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long 
#define di(x) ll x; cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl
#define PI 3.14159265359
#define MOD int(1e9+7)
typedef pair<ll,ll> pairs;

vector<ll> adj[4004];

void solve() {
    di(n);
    di(q);
    vector<vector<int>> v(n+1, vector<int>(26, 0));
    vector<vector<int>> va(n+1, vector<int>(26, 0));
    string a, b;
    cin >> a >> b;
    vector<int> temp(26, 0);

    for (int i = 0; i < n; ++i) {
        temp[a[i] - 'a']++;
        v[i + 1] = temp;
    }
    temp=vector<int>(26, 0);

    for (int i = 0; i < n; ++i) {
        temp[b[i] - 'a']++;
        va[i + 1] = temp;
    }
    
    while (q--) {
        di(l);
        di(r);

        vector<int> tempa(26, 0);
        vector<int> tempb(26, 0);

        for (int i = 0; i < 26; ++i) {
            tempa[i] = v[r][i] - v[l - 1][i];
            tempb[i] = va[r][i]-va[l-1][i];
        }

        int a = 0;
        for (int i = 0; i < 26; ++i) {
            if (tempa[i] > tempb[i]) {
                a += tempa[i] - tempb[i];
            }
        }
        cout << a el;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
