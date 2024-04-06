#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int s1=2000000,s2=2000000,s3=2000000;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(b==1&&a<s1)s1=a;
        else if(b==10&&a<s2)s2=a;
        else if(b==11&&a<s3)s3=a;
        
    }
    if (min(s1+s2,s3)>400000)
        cout<<-1<<endl;
    else
        cout<<min(s1+s2,s3)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      solve();
    }
    
}