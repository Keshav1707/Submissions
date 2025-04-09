#include<bits/stdc++.h>
using namespace std;
int main(){
    string in,res;
    cin>>in;
     transform(in.begin(), in.end(), in.begin(), ::tolower);
    int a=in.length();
    for(int i=0;i<a;i++){
        char c= in[i];
        if(isalpha(c)==false)
            goto ab;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
            continue;
        else
            res=res+"."+in[i];
    }
    cout<<res;
    ab:
    return 0;
}