#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
pair<char,int> a[n][m];
for (size_t j = 0; j < n; j++)
{
    for (auto &&i : a[j])cin>>i.first,i.second=j+1;
}
for (size_t i = 0; i < n; i++)
{
    sort(a[i
    ],a[i]+m);
    
}
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < m; j++)
    {
        cout<<a[i][j].first<<" "<<a[i][j].second<<endl;
    }
    cout<<endl;
}

return 0;
}