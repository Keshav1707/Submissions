#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    if(n>1&&n%2!=0)cout<<"-1";
    else if(n==1)cout<<1;
    else    for (size_t i = 1; i < n; i+=2)
    {
        cout<<i+1<<" "<<i<<" ";
    }
    cout<<endl;
}
 return 0;
}