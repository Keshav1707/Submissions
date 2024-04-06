#include<bits/stdc++.h>
using namespace std;
int main()
{
string t;
cin>>t;
for (int i = t.length() - 1; i >= 0; i--)
{
    int x=int(t[i])-48;
    if(x>=5)
    {
        cout<<"-O|";
        for (size_t i = 1; i <= 5; i++)
        {
            if(i==x-5+1)cout<<"-";
            else cout<<"O";
        }
        
    }
    else
    {
        cout<<"O-|";
        for (size_t i = 1; i <= 5; i++)
        {
            if(i==x+1)cout<<"-";
            else cout<<"O";
        }
        
    }
    cout<<endl;
}

return 0;
}