#include<bits/stdc++.h>
using namespace std;
int max(int x[],int z)
{
    sort(x,x+z);
    return x[z-1];
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int j=0;
        cin>>n;
        int a[n];
        for (size_t i = 0; i < n; i++)cin>>a[i];
        int b[n]={0};
        for (auto &&i : a)
        {
            if(i==0)
            {
                b[j]++;
            }
            else 
            {
              j++;  
            }
        }
        cout<<max(b,n)<<endl;
        
    }
    
}
