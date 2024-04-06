#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    int c=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x>k||y<k)continue;
        else c++;
        

    }
    
    cout<<c<<endl;
}
 return 0;
}