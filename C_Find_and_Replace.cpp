#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while (x--)
    {
        int a,x=0;
        cin>>a;
        string s,s1="",s2="";
        cin>>s;
        for (size_t i = 0; i < a; i++)
        {
            if (i%2==0)
                s2=s2+s[i];
            else
                s1=s1+s[i];
            /* code */
        }
        for (size_t i = 0; i < s1.size(); i++)
        {   
            for (size_t j = 0; j < s2.size(); j++)
            {
                if (s1[i]==s2[j])
                    {
                        x++;
                    }
                /* code */
            }
            
            /* code */
        }
        if (x==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO";
        x=0;
        
    }
}