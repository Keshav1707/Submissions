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
 while(t--)
 {
    di(n);
    di(m);
    vecll v(n);
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(x);
        v.pb(x);
    }
    sort(v.begin(),v.end());
    for (size_t i = 0; i < m; i++)
    {
        di(a);
        di(b);   
        di(c);
        bool f=0;
        long double ans;
        vector<ll>::iterator it =lower_bound(all(v),ans);
        if(it==v.end())cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            cout<<it-v.begin()<<endl;
        }
    }
    
    cout<<endl;
 }
return 0;
}