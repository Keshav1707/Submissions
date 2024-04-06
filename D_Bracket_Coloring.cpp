#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    char a[n];
    int x=0,y=0;
    for (auto &&i : a)
    {
        cin>>i;
        if (i=='(')x++;
        else y++;
    }
    if(x!=y)cout<<-1<<endl;
    else
    {
        int z=1,y=1;
        for (size_t i = 0; i < n; i++)
        {
            if (a[i]==')'&&a[i+1]=='(')z++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i]==')'&&a[i-1]=='(')y++;
        }
        
        cout<<min(y,z)<<endl;
        if(min(y,z)==1)
        {
            for (size_t i = 0; i < n; i++)cout<<"1 ";
            cout<<endl;
        }
        else
        {
            int f=1;
            for (size_t i = 0; i < n; i++)
            {
                if (a[i]==')'&&a[i+1]=='(')f++;
                cout<<f<<" ";
            }
            cout<<endl;
        }
    }
}
 return 0;
}