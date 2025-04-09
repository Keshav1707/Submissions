#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    map<int,int> p;
    auto it=p.begin();
    for (auto &&i : a)cin>>i,p[i]++;        
    cout<<it->first<<" "<<it->second<<endl;
    
}
 return 0;
}