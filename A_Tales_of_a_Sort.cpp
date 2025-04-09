#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--&&cin>>n)
    {
        long long a[n],x;
        for (auto &&i : a)cin>>i;
        for (int i = n - 1; i >0; i--)
        {
            if(a[i-1]>a[i]){x=i;break;}
        }
        long long maxi=0;
        //cout<<x<<endl;
        if(x==0){cout<<0<<endl;continue;}
        for (size_t i = 0; i <= x; i++)
        {
            maxi=max(maxi,a[i]);
        }
        cout<<maxi<<endl;
        
    }
}
