#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < n; j++)
    {
        if(i==j)cout<<k<<" ";
        else cout<<"0 ";
    }
    cout<<endl;
}

return 0;
}