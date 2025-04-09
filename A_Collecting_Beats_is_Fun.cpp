#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
char x;
cin>>t;
map<char,int>a;
for (size_t i = 0; i < 16; i++)
{
    cin>>x;
    //cout<<x<<endl;
    a[x]++;
}
for (auto &&i : a)
{
    if(i.first!='.'&&i.second>(2*t)){cout<<"NO";return 0;}
}
cout<<"YES";

return 0;
}