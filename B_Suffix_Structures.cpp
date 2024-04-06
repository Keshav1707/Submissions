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
    string s,t;
    cin>>s>>t;
    ll c=0,pa=0,pc=0;
    while(pa<s.size()&&t.size()>pc)
    {
        if(s[pa]==t[pc])pa++,pc++,c++;
        else pa++;
    }
    
        if(c==t.size()){cout<<"automaton"<<endl;
        return 0;}
    
    if(s.size()==t.size())
    {
        sort(all(s));
        sort(all(t));
        if(s==t){
            cout<<"array"<<endl;
        return 0;}
    }
    sort(all(s));
    sort(all(t));
    c=0,pa=0,pc=0;
    while(pa<s.size()&&t.size()>pc)
    {
        if(s[pa]==t[pc])pa++,pc++,c++;
        else pa++;
    }
        if(c==t.size()){cout<<"both"<<endl;
        return 0;}
    cout<<"need tree"<<endl;
    
return 0;
}