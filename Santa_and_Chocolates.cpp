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
    di(k);
    ll sum=0;
    for (size_t i = 0; i < n; i++)
    {
        di(x);
        sum+=x;

    }
    if(sum<n)cout<<"NO"<<endl;
    else if(k==0&&sum%n!=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
return 0;
}