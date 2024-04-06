#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k,x;
cin>>t;
while (t--&&cin>>n>>k>>x)
{
    if(x!=1)
    {
        cout<<"YES"<<endl<<n<<endl;
        for (size_t i = 0; i < n; i++)cout<<1<<" ";
        cout<<endl;
    }
    else if(x==1)
    {
        if(k==1)cout<<"NO"<<endl;
        
        else if(n%2==0)
        {
            cout<<"YES"<<endl<<n/2<<endl;
            for (size_t i = 0; i < n/2; i++)cout<<2<<" ";
            cout<<endl;
        }
        else if(k>2&&n%2!=0)
        {
            cout<<"YES"<<endl<<1+(n-3)/2<<endl<<"3 ";
            for (size_t i = 0; i < (n-3)/2; i++)cout<<"2 ";
            cout<<endl;
            
        }
        else if(n%2!=0)cout<<"NO"<<endl;
    }
}
 return 0;
}