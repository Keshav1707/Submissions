#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (size_t i = 0; i < n; i++)
    {
        if(s[i]=='0')v.push_back(i+1);
    }
    
    int m=n;
    long long ans=0;
    reverse(v.begin(),v.end());
    for (auto &&i : v)
    {
        ans+=(m-i);
        
        m--;
    }
    cout<<ans<<endl;
return 0;
}