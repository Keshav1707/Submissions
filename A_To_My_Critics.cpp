#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c;
cin>>t;
while (t--)
{
    cin>>a>>b>>c;
    if(a+b+c-(min(a,min(b,c)))>9)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
 return 0;
}