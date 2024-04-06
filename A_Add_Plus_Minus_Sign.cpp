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
    di(x);
    vector<char> v;
    bool f=1;
    for (int i = 0; i < x; i++)
    {
        char n;
        cin>>n;
        if(n=='0')v.pb('+');
        if(n=='1')
        {
            if(f==1)v.pb('+'),f=0;
            else v.pb('-'),f=1;
        }
    }
    for (int i = 1; i < x; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
return 0;
}