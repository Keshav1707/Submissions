#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m,n,a;
cin>>t;
while (t--&&cin>>m)
{   
    map<int,int>p;
    for (size_t i = 1; i <=m; i++)
    {
        cin>>n;
        for (size_t j = 0; j < n; j++)
        {
            cin>>a;
            p[a]=i;
        }
        
        /* code */
    }
    map<int,int>l;
    for (auto &&i : p)
    {
       l[i.second]=i.first;
    }
    for (auto &&i : l)
    {
        if(l.size()<m)
        {
            cout<<-1;
            break;
        }
      cout<<i.second<<" ";  
    }
    cout<<endl;
     
}
 return 0;
}