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
    int sum=0;
    for (size_t i = 1; i <= 10; i++)
    {
        /* code */
        for (size_t j = 1; j <=10; j++)
        {
            /* code */
            char x;
            cin>>x;
            if(x=='X')
            {
                ll p;
                p=min(min(i,11-i),min(j,11-j));
                sum+=p;   
            }
    
        }
        
    }
    cout<<sum<<endl;
 }
return 0;
}