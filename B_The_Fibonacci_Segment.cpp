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
vecll v;
for (int i = 0; i < t; i++)
{
        di(x);
        v.pb(x);    
}
if(t<=2)
{
    cout<<t<<endl;
    return 0;
}
int maxi=2;
int c=2;
for (int i = 2; i < t; i++)
{
    if(v[i]==v[i-1]+v[i-2])c++;
    
    else maxi=max(maxi,c),c=2;
}
maxi=max(maxi,c);
cout<<maxi<<endl;
return 0;
}