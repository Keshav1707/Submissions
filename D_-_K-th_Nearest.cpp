#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll            long long 
#define di(x)         ll x;cin>>x
#define vecll         vector<ll>
#define pb            push_back
#define all(x)        x.begin(),x.end()
#define el            <<endl

ll countLessEqual(const vecll& v, ll b, ll x) {
    return upper_bound(all(v), b + x) - lower_bound(all(v), b - x);
}

void solve()
{
    di(n);
    di(x);
    vecll v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    
    while(x--)
    {
        di(b);
        di(k);
        
        ll left = 0, right = 2e9;
        while (left < right) {
            ll mid = left + (right - left) / 2;
            if (countLessEqual(v, b, mid) >= k)
                right = mid;
            else
                left = mid + 1;
        }
        
        cout << left el;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}