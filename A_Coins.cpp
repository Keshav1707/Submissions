#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    if(n%2!=0&&(n-k)%2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 return 0;
}


