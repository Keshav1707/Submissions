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
unordered_map<int,int> primeFactors(int n) 
{ 
    unordered_map<int,int>m;
    m[n]++;
    // while (n % 2 == 0) 
    // { 
    //     m[2]++; 
    //     n = n/2; 
    // } 
 
    for (int i = 2; i <= sqrt(n); i = i + 1) 
    { 
        while (n % i == 0) 
        { 
            m[i]++; 
            n = n/i; 
        } 
    } 
    if (n > 2) m[n]++; 
    m[1]++;
    
    return m;
}
signed main()
{
di(t);
while(t--)
{
    di(m);
    for (auto &&i : primeFactors(m))
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    if(primeFactors(m).size()==3)cout<<"YES"<<endl;

    else cout<<"NO"<<endl;


}
return 0;
}