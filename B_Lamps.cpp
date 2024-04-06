#define ll long long 
#include<bits/stdc++.h>

using namespace std;
int main()
{
ll t,n;
cin>>t;
while (t--&&cin>>n)
{
    pair<ll,ll>a[n];
    for (auto &&i : a)cin>>i.first>>i.second;
    sort(a,a+n);
    ll sum=0,x=0,y=a[n-1].first;
    for (ll i = n - 1; i >= 0; i--)
    {   

        if(y != a[i].first)x=0,y=a[i].first;
        if(x!=a[i].first)
        {
            sum+=a[i].second;
            x++;
            
        }
        
    }
    cout<<sum<<endl;
    
}
 return 0;
}