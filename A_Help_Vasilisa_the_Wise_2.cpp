#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned int ra,rb,ca,cb,da,db;
cin>>ra>>rb>>ca>>cb>>da>>db;
for (int x = 0; x < 10; x++)
{
    if(ra-x<10&&ca-x<10&&da-x<10&&x!=ra-x)
    {
        if(ra-x+da-x==cb&&ca-x+da-x==rb&&ra-x+ca-x==db)cout<<x<<" "<<ra-x<<endl<<ca-x<<" "<<da-x<<endl;
    }
}

//cout<<-1<<endl;
return 0;
}