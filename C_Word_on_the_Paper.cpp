#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    char x;
    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            cin>>x;
            if(isalpha(x))cout<<x;
        }
        
    }
    cout<<endl;
}
 return 0;
}