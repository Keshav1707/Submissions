#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,x,y,k,j=0;
    cin>>s>>n;
    k=n;
    while (n--){
        cin>>x>>y;
        if(s>x){
        s+=y;
        j++;
        
        }
        else{
            cout<<"NO";
            break;
        }
    }
    if(j==k)
        cout<<"YES";
         return 0;
}
