 #include<bits/stdc++.h>
 using namespace std;
 //#define int long long
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
 //vector <ll> adj[4004];
 signed main()
 {
 di(t);
 //ll c=0;
 unordered_set<int> v;
 for (int i = 0; i < t; i++)
 {
    /* code */
    di(x);
    v.insert(x);
    
 }
 
 
 cout<<v.size()<<endl;
return 0;
}