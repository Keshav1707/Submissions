#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
float m=0.0;
cin>>n>>l;
int a[n];
    for (size_t i = 0; i < n; i++)cin>>a[i];

    sort(a,a+n);
    for (size_t i = 1; i < n; i++)
    {   

        if(m<float(abs(a[i]-a[i-1]))/2)m=float(abs(a[i]-a[i-1]))/2;
        /* code */
    }
    if(m<float(max(a[0],l-a[n-1])))
    m=max(a[0],l-a[n-1]);
    printf("%f",m);
    
    return 0;
}