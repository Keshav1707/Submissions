#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
   cout<<(n*4+((n-1)*(n-1)+1))<<endl; 
}
 return 0;
}