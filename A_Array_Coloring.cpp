#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
    long long a[n];
    long long sum=0;
    for (auto &&i : a){cin>>i,i%=2;if(i==1)sum++;}
    if(sum%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 return 0;
}