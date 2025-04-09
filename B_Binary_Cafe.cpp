#include<bits/stdc++.h>
using namespace std;
int main()
{
double t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    cout<< (long long)(min((pow(2,k)),n+1))<<endl;
}
 return 0;
}