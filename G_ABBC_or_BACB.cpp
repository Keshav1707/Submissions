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
    string s;
    cin>>s;
    ll sum=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        /* code */
        if(s[i]=='B')
        {
            ll x=i-1,y=i+1,c=0,d=0;
            while(s[x]=='A'&&x>-1)
            {
                c++;
                x--;
            }
            while(s[y]=='A'&&x<s.size())
            {
                d++;
                y++;
            }
            //cout<<c<<" "<<d<<endl;
            sum+=max(c,d);
        }

    }
    cout<<sum<<endl;
 }
return 0;
}