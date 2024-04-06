#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll            long long 
#define di(x)         ll x;cin>>x
#define vecll         vector<ll>
#define pb            push_back
#define po            pop_back
#define all(x)        x.begin(),x.end()
#define el            <<endl;
#define PI            3.14159265359
#define MOD             int(1e9+7)
typedef pair<ll,ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector <ll> adj[4004];
signed main()
{
    string s;
    cin>>s;
    //cout<<s<<endl;
    di(k);
    ll maxi=0;
    ll ans=0;
    
    vecll v;
    for (size_t i = 1; i <= 26; i++)
    {
        di(x);
        v.pb(x);
        maxi=max(maxi,x);
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        /* code */

        //cout<<s[i]-97<<" "<<s[i]<<endl;
        ans+=(i+1)*v[s[i]-'a'];
    }
    //cout<<maxi<<endl;
    for (size_t i = s.size(); i < k+s.size(); i++)
    {
        /* code */
        ans+=(i+1)*maxi;
        //cout<<i<<endl;
    }
    cout<<ans<<endl;
    
return 0;
}