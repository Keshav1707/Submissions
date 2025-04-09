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
    di(x);
    if(x==9)cout<<"NO"<<endl;
    else if(x<=6)cout<<"NO"<<endl;
    else 
    {
        cout<<"YES"<<endl<<1<<" ";   
        if((x-3)%3==0)cout<<4<<" "<<x-5<<endl;
        else cout<<2<<" "<<x-3<<endl;
    } 
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