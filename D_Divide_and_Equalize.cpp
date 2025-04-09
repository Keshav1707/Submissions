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
void primeFactors(int n,unordered_map<int,int>&m) 
{ 
    while (n % 2 == 0) 
    { 
        m[2]++; 
        n = n/2; 
    } 
 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            m[i]++; 
            n = n/i; 
        } 
    } 
    if (n > 2) m[n]++; 
    m[1]++;
}
int solve()
{
    unordered_map<int,int>m;
    di(x);
    vecll v;
    for (size_t i = 1; i <= x; i++)
    {
        di(n);
        v.pb(n);
        primeFactors(n,m);
    }
    for (auto &&i : m)
    {
        if(i.second%x!=0){cout<<"NO"<<endl;return 0;}
    }
    cout<<"YES"<<endl;
    return 0;
}
signed main()
{
di(t);
while(t--)
{
    solve();

}
return 0;
}