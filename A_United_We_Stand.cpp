#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    for (auto &&i : a)cin>>i;
    sort(a,a+n);
    if(a[0]==a[n-1])cout<<-1<<endl;
    else 
    {
        int c=0;
        for (auto &&i : a)
        {
            if(i==a[n-1])c++;
        }
        cout<<n-c<<" "<<c<<endl;
        for (size_t i = 0; i < n-c; i++)cout<<a[i]<<" ";
        cout<<endl;
        for (size_t i = 0; i < c; i++)cout<<a[n-1]<<" ";
        cout<<endl;
        
    }
    

}
 return 0;
}