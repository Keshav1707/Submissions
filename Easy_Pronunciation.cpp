#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n,x;
    cin>>n;
    string s;
    cin>>s;
    x=0;
    for (auto &&i : s)
    {
        if(x==4)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
            x=0;
        else
            x++;
    }
    cout<<"YES"<<endl;
    return 0;

}
int main()
{
int t;
cin>>t;
while (t--)
{
    solve();
}
 return 0;
}