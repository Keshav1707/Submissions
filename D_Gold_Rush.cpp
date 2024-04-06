#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
    if(x==y)return 1;
    if(x%3!=0||x<y)return 0;
    return solve(2*(x/3),y)||solve(x/3,y);
}
int main()
{
    int t,n,m;
    cin>>t;
    while (t--&&cin>>n>>m)
    {
        cout<<(solve(n,m)?"yes":"no")<<endl;        
    }
    return 0;
}