#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
string l,r;
cin>>t;
while (t--&&cin>>l>>r)
{
    if(l.length()<r.length())
    {
        for (size_t i = 0; i < l.length()-r.length(); i++)
        {
            l='0'+l;
        }
        cout<<l<<" "<<r<<endl;
    }
}
 return 0;
}