    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int t,n;
    cin>>t;
     
    while (t--&&cin>>n)
    {
        int x;
        for (size_t i = 0; i < n; i++)
        {
            cin>>x;
            cout<<abs(n+1-x)<<" ";
        }
        cout<<endl;
    }
     return 0;
    }