#include<bits/stdc++.h>
using namespace std;
int main()
{
string a;
cin>>a;
int x=0;
for (size_t i = 0; i < a.size(); i++)
{
    //if(a[i+1]=='/'&&a[i-3]=='/')x-=2;
    if(a[i-1]=='>'&&a[i]=='<'&&a[i+1]=='/')
    {
        
        cout<<endl;
        for (size_t i = 1; i <= x; i++)
        {
            cout<<" ";
        }  
        x-=2; 
    }
    else if(a[i-1]=='>'&&a[i]=='<')
    {
        x+=2;
        cout<<endl;
        for (size_t i = 1; i <= x; i++)
        {
            cout<<" ";
        }
        
    }
    cout<<a[i];
}

 return 0;
}