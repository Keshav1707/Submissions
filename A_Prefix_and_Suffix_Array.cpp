#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    string x="",s;
    for (size_t i = 0; i < 2*n-2; i++)
    {
        
        cin>>s;
        if(s.length()==n-1)x=x+s;
    }
    string temp=x;
    reverse(x.begin(),x.end());
    if(x==temp)cout<<"YES\n";
    else cout<<"NO"<<endl;
}
 return 0;
}