#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    char a[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int c=0;
    string w="DRAW";
    for (size_t i = 0; i < 3; i++)
    {
        if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!='.')w=a[i][0];
        else if(a[0][i]==a[1][i]&&a[1][i]==a[2][i]&&a[0][i]!='.')w=a[0][i];
    }
    if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0][0]!='.')w=a[0][0];
    else if(a[2][0]==a[1][1]&&a[2][0]==a[0][2]&&a[1][1]!='.')w=a[1][1];
    cout<<w<<endl;
}
 return 0;
}