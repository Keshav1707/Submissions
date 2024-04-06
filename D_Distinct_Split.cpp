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
    di(x);
    string s;
    cin>>s;
    unordered_map<char,int>m,ans;
    int c=x;
    for (size_t i = 0; i < x; i++)
    {
        if(m[s[i]]==1)
        {
            c=i;
            break;
        }
        m[s[i]]++;

    }
    for (int i = c; i < x; i++)
    {
        ans[s[i]]++;
    }
    
    cout<<ans.size()+m.size()<<endl;
    
}
return 0;
}