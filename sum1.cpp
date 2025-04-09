#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0,n,d;
    vector<int> a;
    cin>>n>>d;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
        /* code */
    }
    for (size_t i = 0; i < n; i++)
    {
        sum+=a[i]+10;
        /* code */
    }
    
    
    cout<< "the sum is "<<sum;
}