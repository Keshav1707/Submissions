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
    vecll v;
    ll sum=0;
        for (size_t i = 1; i <= n/2-1; i++)
        {
            /* code */
            v.pb(2);
            sum+=2;
        }
        
        for (size_t i = 1; i <= n/2-1; i++)
        {
            /* code */
            v.pb(1);
            sum+=1;
        }
        if((k-sum)%2==0)
        {
            cout<<-1<<endl;
        }
        else 
        {
            for (auto &&i : v)
            {
                cout<<i<<" ";
            }
            cout<<2<<" "<<k-sum-2<<endl;
        }
}
return 0;
}