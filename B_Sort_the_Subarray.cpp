#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    pair<int,int> a[n];
    vector<int> p;
    for (auto &&i : a)cin>>i.first;
    for (auto &&i : a)cin>>i.second;
    for (int i=0;i<n;i++)
    {
      if(a[i].first!=a[i].second)p.push_back(i+1);
    }
    p.pop_back();
    cout<<*p.begin()<<" "<<*p.end()<<endl;
    

}
 return 0;
}