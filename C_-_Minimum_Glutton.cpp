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
    di(n);
    di(x);
    di(y);
    vecll v,va;
    for(int i=0;i<n;i++)
    {
        di(a);
        
        v.pb(a);
        
    }
    for(int i=0;i<n;i++)
    {
        di(a);
        
        
        va.pb(a);
    }
    sort(rall(v));
    sort(rall(va));
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        maxi=i+1;
        if(sum>x)
        {
            break;
        }
    }
    int suma=0;
    int maxia=0;
    for(int i=0;i<n;i++)
    {
        suma+=va[i];
        maxia=i+1;
        if(suma>y)
        {
            break;
        }
    }
    cout<<min(maxi,maxia)<<endl;

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