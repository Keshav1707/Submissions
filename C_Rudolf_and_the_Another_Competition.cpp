#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,h;
cin>>t;
while (t--&&cin>>n>>m>>h)
{
    pair<pair<int,int>,int>v[n];
    for (size_t i = 0; i < n; i++)
    {
        int x,sum=0;
        v[i].second=i+1;
        for (size_t i = 0; i < m; i++)
        {
            cin>>x;
            if(x+sum<=h)sum+=x,v[i].first.second+=x+sum,v[i].first.first++;
        }
        
    }
    for (auto &&i : v)
    {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }
    cout<<endl;
    
}
 return 0;
}