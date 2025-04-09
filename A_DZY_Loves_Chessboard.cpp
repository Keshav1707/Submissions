#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
char a[x][y];
for (size_t i = 0; i < x; i++)
{
    for (auto &&j : a[i])cin>>j;
}
for (size_t i = 0; i < x; i++)
{
    for (size_t j = 0; j < y; j++)
    {
        if(a[i][j]!='.')cout<<"-";
        else if((i+j)%2==0)cout<<"B";
        else cout<<"W";
    }
    cout<<endl;
}

return 0;
}