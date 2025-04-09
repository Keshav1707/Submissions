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
    di(k);
    string s;
    cin>>s;
    //cout<<s<<endl;
    ll c=0;
    for (size_t i = 0; i < n;)
    {
        /* code */
        if(s[i]=='B')c++,i+=k;
        else i++;
    }
    cout<<c<<endl;
 }
return 0;
}