#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    int x,p=0;
    for (size_t i = 1; i <= n; i++)
    {
        cin>>x;
        int l=abs(int(x-i));
        //cout<<"p"<<l<<endl;
        if(l%k==0||l==0)continue;
        
        else p++;
    }
    
    if(p==0)cout<<0<<endl;
    else if(p==2)cout<<1<<endl;
    else cout<<"-1"<<endl;
    
}
 return 0;
}