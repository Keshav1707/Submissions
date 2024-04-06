#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,q;
cin>>t;
while (t--&&cin>>n>>q)
{
    int a[n],b[n+1]={0}, sum=0,o=1;
    for (auto &&i : a)cin>>i,sum=sum+i,b[o]=b[o-1]+i,o++;
    int l,r,k;
    while (q--&& cin>>l>>r>>k)
    {
        int x=b[n]+((l-r+1)*k)-(b[r]-b[l-1]);
        if(x%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
   }
 return 0;
}