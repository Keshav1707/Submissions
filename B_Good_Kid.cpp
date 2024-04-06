 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 #define ll            long long 
 #define di(x)         ll x;cin>>x
 #define vecll         vector<ll>
 #define pb            push_back
 #define po            pop_back
 #define all(x)        x.begin(),x.end()
 #define el            <<endl;
 #define PI            3.14159265359
 #define MOD             int(1e9+7)
 typedef pair<ll,ll> pairs;
//-----------------------------------------------------------------------------------------------------
 vector <ll> adj[4004];
 signed main()
 {
 di(t);
 int n;
 while(t--&&cin>>n)
 {
    vecll v;
    ll maxi=LLONG_MAX;
    ll pro=1;
    int ind;
    for (size_t i = 0; i <n; i++)
    {
        /* code */
        di(x);
        if(x<maxi)ind=i;
        maxi=min(maxi,x);
        v.pb(x);
    }
    
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if(i!=ind)pro*=v[i];
    }
    cout<<pro*(maxi+1)<<endl;
 }
return 0;
}