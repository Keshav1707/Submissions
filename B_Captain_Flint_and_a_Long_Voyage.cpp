#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while(t--&&cin>>n)
{
    int x=n/4+1;
    for (size_t i = 0; i < n-x; i++)cout<<9;
    for (size_t i = 0; i < x; i++)cout<<8;
    cout<<endl; 
}

 return 0;
}