#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n],x=0;
    for (auto &&i : a)cin>>i;
    int sum=0;
    for (auto &&i : a)
    {
        
        if(i<0)x=max(sum,x);
        sum+=i;
    }
    
    cout<<x<<endl;
    //cout<<endl;
}
 return 0;
}