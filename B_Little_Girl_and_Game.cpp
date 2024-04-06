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
map<char,int>m;
for (auto &&i : s)
{
    m[i]++;
}
ll c=0;
for (auto &&i : m)
{
    //cout<<i.first<<" "<<i.second<<endl;
    if(i.second&1)c++;
}
c&1?cout<<"First":cout<<"Second";
cout<<"\n";
return 0;
}