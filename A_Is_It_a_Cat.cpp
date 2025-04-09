#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
string s;
cin>>t;
while (t--&&cin>>n>>s)
{
    

   // s.erase(unique(s.begin(),s.end()),s.end());
    set<char>p;
    auto it=p.begin();
    for (auto &&i : s)=tolower(i);
    if(s=="meow")cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
    
    
}
 return 0;
}