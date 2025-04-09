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
    di(m);
    string s,x;
    cin>>s>>x;
    ll c=0;
    while(n<m)s+=s,n*=2,c++;
    bool f=0;
    for (size_t i = 0; i <= s.size()-m; i++)
    {
        /* code */
        if(s.substr(i,m)==x){f=1;break;}
    }
    if(f==1)cout<<c<<endl;
    else
    {
        bool f=0;
        s+=s;
        n*=2;
        for (size_t i = 0; i < s.size()-m; i++)
        {
        /* code */
        if(s.substr(i,m)==x){f=1;break;}
        }
        if(f==1)cout<<c+1<<endl;
        else cout<<"-1"<<endl;
    }
    
}
return 0;
}