#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    bool flag=0;
    for (size_t i = 0; i < n; i++)
    {
        if((i*(i-1)+(n-i)*(n-i-1))/2==k)
        {
            cout<<"YES"<<endl;
            for (size_t j = 0; j < i; j++)cout<<-1<<" ";
            for (size_t j = 0; j < n-i; j++)cout<<1<<" ";
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"NO";
    cout<<endl;

}
 return 0;
}