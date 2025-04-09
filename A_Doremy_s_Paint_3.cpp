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
    map<int,int>m;;
    for (int i = 0; i < n; i++)
    {
        di(x);
        m[x]++;

    }
    if(m.size()>2)cout<<"No"<<endl;
    else
    {
        vecll v;
        for (auto &&i : m)
        {
            v.pb(i.second);
        }
        sort(all(v));
        bool f=0;
        for (int i = 1; i < v.size(); i++)
        {
            /* code */
            if(v[i]-v[i-1]>1){f=1;break;}
        }
        f==1?cout<<"No"<<endl:cout<<"Yes"<<endl;
        
    }

}
return 0;
}