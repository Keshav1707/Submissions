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
vector<float>v;
v.pb(0);
for (int i = 0; i < t; i++)
{
    di(x);
    v.pb(x);
}
sort(all(v));

float ans=0;
if(t&1)
{
   for (int i = 1; i < v.size(); i+=2)
   {
    /* code */
    ans+=(v[i])*(v[i])-(v[i-1]*v[i-1]);
   }
   cout<<setprecision(100)<<ans*PI<<endl;
    
}
else
{
   for (int i = 2; i < v.size(); i+=2)
   {
    /* code */
    ans+=(v[i])*(v[i])-(v[i-1]*v[i-1]);
   }
   cout<<setprecision(10)<<ans*PI<<endl;
    
}
return 0;
}
