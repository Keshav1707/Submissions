#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
bool flag =1;
for (size_t i = 0; i < x; i++)
{
    for (size_t j = 0; j < y; j++)
    {
        if(flag&&i%2!=0&&j==y-1)
        {
            cout<<'#';
            continue;
        }
        else if(!flag&&i%2!=0&&j==0)
        {
            cout<<'#';
            continue;
        }
        if(i%2!=0)
        cout<<'.';
        else cout<<'#';

    }
    
    cout<<endl;
    if(i%2!=0)
    flag=!flag;
}

 return 0;
}