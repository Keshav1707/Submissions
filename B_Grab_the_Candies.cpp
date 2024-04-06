#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while (x--)
    {
        int a;
        cin>>a;
        int n[a];
        for (int i=0;i<a;i++)
        {
           cin>>n[i];
        }
        int even=0,odd=0;
        for (int i=0;i<a;i++)
        {
            if (n[i]%2==0)
                even=even+n[i];

            else
                odd=odd+n[i];
        }
        if (even<=odd)
            cout<<"NO"<<endl;
        else if (even>odd)
            cout<<"YES"<<endl;
         /* code */
    }
    return 0;
}
