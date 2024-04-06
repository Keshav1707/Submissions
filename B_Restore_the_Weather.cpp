#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{

    pair<int,int> a[n];int b[n];
    for (int j=0;j<n;j++)cin>>a[j].first,a[j].second=j;
    for (int j=0;j<n;j++)cin>>b[j];

    sort(a,a+n),sort(b,b+n);
    int t[n]={0};
    for (size_t i = 0; i < n; i++)
    {
        t[a[i].second]=b[i];
    }
    for (auto &&i : t)cout<<i<<" ";
    
    cout<<endl;
    
}
 return 0;
}