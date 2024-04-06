#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    if(n==3)cout<<"NO"<<endl;
    else if(n%2!=0)
    {
        cout<<"YES"<<endl;
        for (size_t i = 1; i < n; i+=2)
        {
            cout<<n/2-1<<" "<<-(n/2)<<" ";
        }
        cout<<n/2-1<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
        for (size_t i = 0; i < n; i+=2)
        {
            cout<<1<<" "<<-1<<" ";
        }
        cout<<endl;
    }
}
 return 0;
}