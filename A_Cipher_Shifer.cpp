#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
string s;
while (t--&&cin>>n>>s)
{
    string a="";
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            //cout<<i<<" "<<j<<endl;
            if(s[i]==s[j])
            {
                
                a=a+s[i];
                i=j+1;
                j++;
                
            }
            
        }
        
    }
    cout<<a<<endl;
}
 return 0;
}