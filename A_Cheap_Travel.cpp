#include<bits/stdc++.h>
using namespace std;
int main()
{
float m,n,a,b;
cin>>n>>m>>a>>b;
int x=min(ceil(n/m)*b,n*a);


cout<<x<<endl;
return 0;
}