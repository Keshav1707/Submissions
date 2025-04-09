#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,sum=0,z,tmp=1;
cin>>n>>m;
for (size_t i = 0; i < m; i++)
{
    cin>>z;
    if(tmp>z)
    {
        sum=sum+abs(n-tmp)+z;
    }
    else if(z>tmp)
        sum=sum+abs(z-tmp);
    tmp=z;  

}
cout<<sum;

return 0;
}