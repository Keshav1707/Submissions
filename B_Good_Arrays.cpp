#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--&&cin>>n)
    {
        long long a[n],c=0,sum=0;
        for (auto &&i : a){cin>>i;if(i!=1)sum+=(i-1);else c++;}
        if(n==1)cout<<"NO"<<endl;
        else if(c==0)cout<<"YES"<<endl;
        else if(sum<c)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        
        
    }
    
}