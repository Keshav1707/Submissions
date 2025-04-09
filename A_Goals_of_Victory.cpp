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
void solve()
{
    di(n);
    ll sum=0;
    for (size_t i = 0; i < n-1; i++)
    {
        /* code */
        di(x);
        //cout<<x<<" ";
        sum+=x;
    }
    //cout<<endl;
    cout<<-sum<<endl;
    queue<int>q;
    q.pu
}
signed main()
{
di(t);
while(t--)
{
    solve();
}
return 0;
}