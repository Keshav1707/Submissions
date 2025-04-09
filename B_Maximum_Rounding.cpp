#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
string s;
while (t--&&cin>>s)
{
    s='0'+s;
    vector<int>v;
    int k=-1;
    for (auto &&i : s)v.push_back(int(i)-48);
    for (int i = v.size() - 1; i > 0; i--)
    {
        if(v[i]>4)
        {
        v[i-1]++;
        k=i;
        }
    
    }
    for (size_t i = k; i < v.size(); i++)
    {
        v[i]=0;
    }
    
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[0]==0&&i==0)continue;
        cout<<v[i];
    }
    cout<<endl;
    
}
 return 0;
}