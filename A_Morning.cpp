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
    ll a=0,prev =1;
    for (size_t i = 0; i < 4; i++)
    {
        if(s[i]=='0')a+=abs(prev-10),prev=10;
        else a+=abs(prev-(s[i]-'0')),prev=(s[i]-'0');
    }
    cout<<a+4<<endl;
}
return 0;
}