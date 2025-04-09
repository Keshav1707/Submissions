#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
    
    long long m,x;
    pair<long long,long long >k[n];
    long long f=0;
    while(n--&&cin>>m)
    {
        long long l[m];
        
        for (size_t i = 0; i < m; i++)
        {
            cin>>l[i];
        }
        k[f].first=LONG_LONG_MAX;
        long long c=0;
        for (size_t i = 0; i < m; i++)
        {
            /* code */
            if(k[f].first>l[i]){
            k[f].first=min(k[f].first,l[i]),c=i;
            }
        }
        k[f].second=LONG_LONG_MAX;
        for (size_t i = 0; i < m; i++)
        {
            /* code */
            if(i!=c){k[f].second=min(k[f].second,l[i]);}
            
        }
        f++;
        //cout<<k[f].first<<" "<<k[f].second<<endl;

    }
    long long ans=0,smax=LONG_LONG_MAX,smin=LONG_LONG_MAX;
    for (auto &&i : k)
    {
        
        ans+=max(i.first,i.second);
        smin=min(min(i.first,i.second),smin);
        smax=min(max(i.first,i.second),smax);
    }
    
    ans=ans+smin-smax;
    cout<<ans<<endl;
}
 return 0;
}