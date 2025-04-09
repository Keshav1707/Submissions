#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
            /* code */
        }
        sort(a,a+n);
        cout<<max(a[0]*a[1],a[n-1]*a[n-2])<<endl;
        
    }
}