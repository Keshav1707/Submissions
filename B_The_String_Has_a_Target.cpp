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
di(t);
while(t--)
{
    di(x);
    string s;
    cin>>s;
    char minchar='z';
    ll minind,ind=0;;
    for (auto &&i : s)
    {
        if(i<=minchar)minchar=i,minind=ind;
        ind++;
    }
    cout<<minchar;
    for (ll i = 0; i < x; i++)
    {
        if(i==minind)continue;
        cout<<s[i];
    }
    cout<<"\n";
}
return 0;
}