#include<bits/stdc++.h>
using namespace std;
int main()
{
pair<double,char>a[4];
string s;
for (auto &&i : a)
{
    cin>>s;
    i.first=s.length()-2;
    i.second=s[0];
    
}
sort(a,a+4);

}
