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
 bool solve(vector<int>v,int mid,int k)
 {
    int sum=0;
    for (auto &&i : v)
    {
        if(mid>=i)sum+=(mid-i);
    }
    return sum>k?1:0; 
 }
 signed main()
 {
 di(t);
 while(t--)
 {
    di(n);
    di(x);
    vecll v;
    ll maxi=0;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(o);
        v.pb(o);
        maxi=max(maxi,o);
    }
    int lo=0,hi=1e10,mid;
    while(lo<=hi)
    {
        mid=(lo+hi)>>1;
        if(solve(v,mid,x))hi=mid-1;
        else lo=mid+1;
    }
    cout<<hi<<endl;
 }
return 0;
}