#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    string s;
    cin>>s;
    map<string,int>p;
    for (size_t i = 0; i < n-1; i++)
    {
        string l=s.substr(i,2);
        //cout<<l<<endl;
        p[l]++;
    }
    cout<<p.size()<<endl;;
    
}
 return 0;
}