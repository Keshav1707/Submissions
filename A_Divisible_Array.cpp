#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int i=1;
    while(n--)
    {
        cout<<2*i<<" ";
        i++;
    }
    cout<<endl;
}
 return 0;
}