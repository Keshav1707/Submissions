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
string frequencySort(string s) {
        vector<pair<int,char>>p(26,(std :: make_pair(0,'a')));
        for(int i=0;i<s.size();i++)
        {
            p[s[i]-'a'].first++;
            p[s[i]-'a'].second=s[i];
        }
        sort(all(p));
        string sa;
        
        for (int i = 25; i >= 0; i--)
        {
            for (ll j = 0; j < p[i].first; j++)
            {
                sa+=p[i].second;
            }
            
        }
        return sa;
        
    }
signed main()
{

    cout<<frequencySort("tree");
return 0;
}