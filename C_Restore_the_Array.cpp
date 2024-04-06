#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x=0;
int a[200000];
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    
    for (size_t i = 0; i < n-1; i++)
    {
        cin>>a[i];
       
        /* code */
    }
    if(a[n-2]==0)
        a[n-1]=0;
    for (size_t i = 0; i < n-1; i++)
    {   
        cout<<a[i]<<" ";
        if(a[i]<a[i+1]&&x==0)
        {
            cout<<min(a[i],a[i+1])<<" ";
            x++;
        }
        /* code */
    }
    if(x==0)
        cout<<a[n-2];
    cout<<endl;
    x=0;     
}
 return 0;
}