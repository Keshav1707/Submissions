#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;string a;
    if(n>=1&&n<=100){
    for (i=0;i<=n;i++){
        getline(cin,a);
        if (a.length()>10)
            cout<<a[0]<<(a.length()-2)<<a[a.length()-1]<<endl;
        else 
            cout<<a<<endl;
    }
    }
    return 0;
}