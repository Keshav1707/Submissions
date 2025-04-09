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
double long sum=0;
for (size_t i = 0; i < t; i++)
{
    /* code */
    di(x);
    v.pb(x);
}
sort(all(v));
int av=(t)/2;
//long double avd=ceil(sum/t);
ll sumans=0,sumdans=0;
//cout<<av<<" "<<avd<<endl;
for (auto &&i : v)
{
    sumans+=abs(v[av]-i);
    //sumdans+=abs(avd-i);
}
cout<<sumans<<endl;
return 0;
}