#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
t--;
int x,y;
unordered_map<int,int>p;
while (t--)
{
    cin>>x>>y;
    p[x]++;
    p[y]++;

}
int c=0;
for (auto &&i : p)
{
    if(i.second==1)c++;
}
cout<<c<<endl;
 return 0;
}