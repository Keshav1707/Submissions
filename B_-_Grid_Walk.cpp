#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll            long long 
#define di(x)         ll x;cin>>x
#define vecll         vector<ll>
#define pb            push_back
#define po            pop_back
#define all(x)        x.begin(),x.end()
#define rall(x)        x.rbegin(),x.rend()
#define el            <<endl;
#define PI            3.14159265359
#define MOD             int(1e9+7)
typedef pair<ll,ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector <ll> adj[4004];
void solve()
{
    di(r);
    di(c);
    di(sr);
    di(sc);
    vector<vector<char>>v;
    for(int i=0;i<r;i++)
    {
        vector<char>temp;
        for(int j=0;j<c;j++)
        {
            char c;
            cin>>c;
            temp.pb(c);
        }
        v.pb(temp);
    }
    sr--;
    sc--;
    string x;
    cin>>x;
    int ind=0;
    while(ind<x.size())
    {
        if(x[ind]=='U')
        {
            
            if(sr-1>=0&&v[sr-1][sc]!='#')sr--;
        }
        else if(x[ind]=='D')
        {
            if(sr+1<r&&v[sr+1][sc]!='#')sr++;
        }
        else if(x[ind]=='L')
        {
            if(sc-1>=0&&v[sr][sc-1]!='#')sc--;
        }
        else if(x[ind]=='R')
        {
            if(sc+1<c&&v[sr][sc+1]!='#')sc++;
        }
        ind++;
    }
    cout<<sr+1<<" "<<sc+1<<endl;
}
signed main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
cout.tie(NULL);
ll t=1;
//cin>>t;
while(t--)
{
solve();
}
return 0;
}