#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
{
    int min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    return min;

}

int main()
{
    int n,on=0,tw=0,th=0;
    cin>>n;
    int t[n];
    string a="",b="",c="";
    for (size_t i = 0; i < n; i++)    
    {
        cin>>t[i];
        /* code */
    }
for (size_t i = 0; i < n; i++)
{
    if(t[i]==3)
    {
        th++;
        a+=th;
    }
    else if(t[i]==2)
    {
        tw++;
        b+=tw;
    }
    else if(t[i]==1)
    {
        on++;
        c+=on;
    }
}
cout<<min(on,tw,th)<<endl;
for (size_t i = 0; i < min(on,tw,th); i++)
{
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
} 
}