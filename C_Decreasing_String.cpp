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
vector <ll>v;
void eq()
{
    for(int i =1;i<1e6;i++)
    {
        v.pb(i*(i+1)/2);
    }
}
signed main()
{
di(t);
eq();
while(t--)
{
    string s;
    ll pos;
    cin>>s>>pos;
    int f=0;
    vector<pair<char,int>>p;
    for (auto &&i : s)
    {
        p.pb({i,f+1});
        f++;
        
    }
    sort(all(p));

    ll l=v[s.size()-1];
    auto x=upper_bound(v.begin(),v.end(),pos);
    p.resize(s.size()-(x-v.begin()-1));
    
    pos=v[s.size()-1-(x-v.begin()-1)];
    cout<<pos<<endl;
    vecll c;
    for (auto &&i : p)
    {
        c.pb(i.second);

    }

    sort(all(c));
    // for (auto &&i : c)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl<<pos<<endl;
    // for (auto &&i : p)
    // {
    //      if(c[pos-1]==i.second)cout<<i.first;
    // }
    
    

}
return 0;
}