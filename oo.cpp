#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="HIIII";
    string *c=&s;
    cout<<sizeof(c)<<endl;
    int a=5;
    int *p=&a;
    cout<<sizeof(p)<<endl;
}