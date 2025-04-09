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
    pair<int,int>v;
    cin>>v.first>>v.second;
    bool f=0;
    for (size_t i = 1; i < n; i++)
    {
        /* code */
        di(x);
        di(y);
        if(x>=v.first&&y>=v.second)
        {
            f=1;
        }
    }
    if(f)cout<<-1<<endl;
    else cout<<v.first<<endl;
    
}
return 0;
}