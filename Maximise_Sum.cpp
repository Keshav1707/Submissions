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
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int i=0,sum=0;
    while(v[i]<v[i+1]&&i<n)sum+=v[i],i++;
    while(i<n)
    {
        ll maxi=0,ind;
        for (int j = i; j < n; j++)
        {
            /* code */
            if(maxi<=v[j])maxi=v[j],ind=j;
        }
        cout<<maxi<<" ";
        sum+=(ind-i)*min(v[i],v[ind]);
        //cout<<sum<<endl;
        sum+=max(v[i],v[ind]);
        i=ind+1;
    }
    cout<<endl;
    cout<<sum<<endl;
}
return 0;
}