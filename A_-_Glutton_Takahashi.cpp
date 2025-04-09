#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll            long long 
#define di(x)         ll x;cin>>x
#define vecll         vector<ll>
#define pb            push_back
#define po            pop_back
#define all(x)        x.begin(),x.end()
#define rall(x)        x.rbegin(),x.rend()
#define el            <<endl;
#define PI            3.14159265359
#define MOD             int(1e9+7)
typedef pair<ll,ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector <ll> adj[4004];
void solve()
{
    di(x);
    vector<string>v;
    for(int i=0;i<x;i++)
    {
        string s;
        cin>>s;
        v.pb(s);
    }
    for(int i=1;i<x-1;i++)
    {
        if(v[i]=="sweet"&&v[i-1]=="sweet")
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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