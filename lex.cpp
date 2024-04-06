#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int count1=0,count2=0;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<=s1.length();i++){
        char c=toupper(s1[i]),b=toupper(s2[i]);
        count1=count1+int(c);
        count2=count2+int(b);
    }
    if(count1>count2)
        cout<<"1";
    else if(count1<count2)
        cout<<"-1";
    else    
        cout<<"0";
    return 0;
}
