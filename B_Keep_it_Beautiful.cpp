#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    cin>>a[0];
    int f=a[0],l=-1;
    for (size_t i = 1; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        if(l==-1)cout<<1;

        if(a[i]>a[i+1]&&a[i+1]<=f){l=a[i+1];cout<<1;break;}
    }
    //cout<<f<<" "<<l;
    

    cout<<endl;
}
 return 0;
}