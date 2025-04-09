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
pair<int,int> a[t];
for (size_t i = 0; i < t; i++)
{
    /* code */
    for (size_t j = 0; j < t; j++)
    {
        /* code */
        char c;
        cin>>c;
        a[i].second=i+1;
        if(c=='x')a[j].first++;
        else if(c=='o')a[i].first++;
    }
    
}
//sort(a,a+t);
for (size_t i = 0; i < t-1; i++)
{
    /* code */
    for (size_t j = i; j < t; j++)
    {
        /* code */
        if(a[i].first>=a[j].first)swap(a[i],a[j]);
    }
    
}
for (int i = t - 1; i >= 0; i--)
{
    cout<<a[i].second<<" ";
    /* code */
}

return 0;
}