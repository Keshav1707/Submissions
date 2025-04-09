#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n][m];
for (size_t i = 0; i < n; i++)
{
    for (auto &&j : a[i])
    {
        cin>>j;
        cout<<j<<" ";
    }
    cout<<endl;
}

return 0;
}