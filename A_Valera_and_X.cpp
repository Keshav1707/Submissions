#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
char a[t][t];
for (size_t i = 0; i < t; i++)
{
    for (auto &&x : a[i])cin>>x;
}
int f=0;
for (size_t i = 0; i < t; i++)
{
    for (size_t j = 0; j < t; j++)
    {
        if(i==j||i==t-j-1){if(a[i][j]==a[0][0])f++;}
        else if(a[i][j]==a[0][1]&&a[i][j]!=a[0][0])f++;
    }
}
f==t*t?cout<<"YES":cout<<"NO";
return 0;
}