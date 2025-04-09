#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m;
cin>>t>>m;
int x,flag=0;

vector<int>a;
int c=0;
while (t--&&cin>>x)
{
    c++;
    int r[x];
    for (auto &&i : r)cin>>i;
    for (auto &&i : r)
    {
        if(i<m){flag++;a.push_back(c);break;}
    }
}
cout<<flag<<endl;
for (auto &&i : a)cout<<i<<" ";


 return 0;
}