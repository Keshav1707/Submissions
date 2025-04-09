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
    string s;
    cin>>s;
    vecll v(2e5,0);
    int m=0,prod=1;
    v[0]=1;
    for (int i = 1; i < s.size(); i++)
    {
        /* code */
        if(s[i]!=s[i-1])m++;
        v[m]++;
    }
    ll sum=0;
    if(m==s.size()){cout<<"0 1"<<endl;break;}
    for (ll i = 0; i <= m; i++)
    {
        if(v[i]!=1)prod=((prod%998244353)*((v[i]%998244353)*((v[i]-1)%998244353))%998244353)%998244353;
        sum+=v[i]-1;
    }
    cout<<sum<<" "<<prod<<endl;
    
}
return 0;
}