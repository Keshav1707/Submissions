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

    di(x);
    vecll v;
    int a=0,p=0;
    for (int i = 0; i < x-1; i++)
    {
        di(k);
        v.pb(k);
        p=p^k;
    }
    
        vecll va(x,0);
        va[0]=p;

        int c=0;
        for (int i = 0; i < x-1; i++)
        {
            va[i+1]=v[i]^va[i];
        }
        
        for (auto &&i : va)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
return 0;
}