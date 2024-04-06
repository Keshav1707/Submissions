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
 di(n);
 di(m);
 di(k);
 vecll v(n),va(m);
 for (auto &&i : v)
 {
    cin>>i;
 }
 for (auto &&i : va)
 {
    cin>>i;
 }

 int a=0,b=0,c=0;
 sort(v.begin(),v.end());
 sort(va.begin(),va.end());
 while(a<v.size()&&b<va.size())
 {
    //cout<<v[a]<<" "<<va[b]<<endl;
    if(v[a]-k>va[b])b++;
    else if(v[a]+k<va[b])a++;
    else c++,a++,b++;
 }
 cout<<c<<endl;
return 0;
}