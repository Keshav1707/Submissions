#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a[3]={0},x,f=1;
for (size_t i = 0; i < t; i++)
{
    cin>>x;
    if(f==1){a[0]+=x,f++;continue;}
    if(f==2){a[1]+=x,f++;continue;}
    if(f==3){a[2]+=x,f=1;continue;}
}

if(a[0]>=a[1]&&a[0]>=a[2])cout<<"chest";
else if(a[0]<=a[1]&&a[1]>=a[2])cout<<"biceps";
else cout<<"back";

}