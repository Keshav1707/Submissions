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
void gen(string s,int n)
{
    if(s.size()==n)
    {
        cout<<s<<endl;
        return;
    }
    if(s.back()=='0')
    {
        s+='1';
        gen(s,n);
        s+='0';
        gen(s,n);
    }
    else
    {
        s+='0';
        gen(s,n);
    }
}
void powset(int ind,vecll v,vecll a)
{
    if(ind >= v.size())
    {
        for (auto &&i : a)
        {
            cout<<i<<" ";
        }
        if(a.size()==0)cout<<"{}";
        cout<<"\n";
        return;
    }
    a.pb(v[ind]);
    powset( ind+1,v,a);
    a.po();
    powset(ind+1,v,a);
}
signed main()
{
    int N=4;
    string s1="1";
    gen(s1,N);
    string s2="0";
    gen(s2,N);
    
return 0;
}