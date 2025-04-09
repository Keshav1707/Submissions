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
//vecll v;
//ll sum=0;
ll hi=t-1,lo=0,maxi=LLONG_MIN,sum=0;

for (size_t i = 0; i < t; i++)
{
    /* code */
    di(s);
    sum+=s;
    maxi=max(maxi,sum);
    if(sum<0)sum=0;
    
    
}
cout<<maxi<<endl;
return 0;
}