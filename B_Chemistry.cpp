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
    map<char,int>m;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        m[c]++;
    }
    if((n-k)%2==0)
    {
        ll a=0;
        for (auto &&i : m)
        {
                a+=(i.second)/2;
        }
        //cout<<a<<" ";
        if(a*2>=(n-k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        ll a=0;
        bool f=0;
        for (auto &&i : m)
        {
                a+=(i.second)/2;
                if(((i.second)%2)!=0)f=1;
        }
        //cout<<a<<" ";
        if(a*2>=(n-k-1)&&f==1)cout<<"YES"<<endl;
        else if(a*2>=(n-k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}
return 0;
}