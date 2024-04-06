#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
string s;
cin>>s;


for (size_t i = 0; i < n; i++)
{
    for (size_t i = 0; i < t; i++)
    {
        char temp='\0';
        if(s[i]=='B'&&s[i+1]=='G')
        {
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }

        /* code */
    }
    
    /* code */
}
cout<<s;
 return 0;
}