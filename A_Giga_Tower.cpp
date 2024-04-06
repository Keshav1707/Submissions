#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
string s;
while(true)
{
    t++;
    c++;
    //cout<<t<<endl;
    s=to_string(t);
    for (auto &&i : s)
    {
        if(i=='8'){cout<<c;return 0;}
    }
    
}
return 0;
}