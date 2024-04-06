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
 vector<pair<int,int>>p;
 for (size_t i = 0; i < t; i++)
 {
    /* code */
    di(a);
    di(b);
    p.pb({a,1});
    p.pb({b,-1});

 }
  sort(all(p));
  ll maxi=0,c=0;
  
  for (auto &&i : p)
  {
    //cout<<i.first<<" "<<i.second<<endl;
    c+=i.second;
    maxi=max(maxi,c);
  }
  cout<<maxi<<endl;
return 0;
}