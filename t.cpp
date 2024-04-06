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
    di(N);
    di(K);
    int ans=1;
    bool f=1;
    for (ll i = 0; i < K; i++)
    {
        char c;
        cin>>c;
        if(f==1)
        {
            if(c=='U')ans++;
            else if(c=='S')ans+=2;
            else if(c=='R')f=0;            
        }
        if(f==0)
        {
            if(c=='U')ans--;
            else if(c=='S')ans-=2;
            else if(c=='R')f=1;
        }
        
    }
    if(ans > n )
    {
        ans%= n ;
        if(ans == 0){ans= n;}
    }
    cout<<ans<<endl;
}
return 0;
}