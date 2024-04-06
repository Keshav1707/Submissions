#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,k,H;
cin>>t;
while (t--&&cin>>n>>m>>k>>H)
{
    int x,c=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        for (size_t j = 1; j < m; j++)
        {
            if(min(x,H)+j*k==max(x,H))c++;
        }
        
    }
    cout<<c<<endl;
    
}
 return 0;
}