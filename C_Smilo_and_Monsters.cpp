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
    di(n);
    vecll v(n);
    ll sum=0;
    for (auto &&i : v)
    {
        cin>>i;
        sum+=i;
    }
    sort(all(v));
    int x=0,f=n,a=(sum+1)/2;
    
    for (int i = 0; i < n; i++)
    {
        x+=v[i];
        if(x>a)break;
        f--;
    }
    cout<<a+f<<endl;
}
return 0;
}