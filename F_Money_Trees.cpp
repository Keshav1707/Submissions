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
    di(n);di(k);
    pair<ll,ll>v[n+1];
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(l);
        v[i].first=l;
    }
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(l);
        v[i].second=l;
    }
    v[n].first=0;
    v[n].second=LLONG_MAX;
    int sum=0,lo=0,hi=1,maxi=0;
    while(hi<n)
    {
       if(v[hi-1].second%v[hi].second==0&&v[hi-1].first+sum<=k)
       {
        hi++;
        sum+=v[hi-1].first;
       } 
       else if(v[hi-1].second%v[hi].second==0&&v[hi-1].first+sum>k)
       {
            //cout<<hi<<" "<<lo<<"u"<<endl;
            maxi=max(maxi,hi-lo);
            sum-=v[lo].first;
            lo++;
       }
       else if(v[hi-1].second%v[hi].second!=0)
       {
            //cout<<hi<<" "<<lo<<"n"<<endl;
            maxi=max(maxi,hi-lo);
            lo=hi+1;
            hi+=2;
            sum=0;
            
       }
    }   
    cout<<maxi<<endl;
 }
return 0;
}