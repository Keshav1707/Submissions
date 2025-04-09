#include<bits/stdc++.h>
using namespace std;
int solve(int x[],int y)
{
    for (size_t i = 1; i < y; i++)
    {
        if(x[i]%x[i-1]==0)x[i]++;
    }
    return x[y];
}
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    for (auto &&i : a)cin>>i,i++; 
    solve(a,n);    
    for (auto &&i : a)cout<<i<<" ";
    cout<<endl;
    
    
}
 return 0;
}