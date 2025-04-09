#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
char d;
cin>>t;
string s;
while (t--&&cin>>n>>d>>s)
{  
    int x=0;
    while(x<n&&s[x]>=d)x++;
    s.insert(x,1,d);
    cout<<s<<endl;
}
 return 0;
}