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
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector <ll> adj[4004];
void solve()
{
    di(n);
    di(m);
    string s,t;
    cin>>s>>t;
    bool f=1;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(s[i-1]==s[i]){f=0;break;}
    }
    if(f==0)
    {
        if(m%2==0)
        {
            cout<<"No"<<endl;
            return ;
        }
        for (int i = 1; i < m; i++)
        {
            if(t[i-1]==t[i])
            {
                cout<<"No"<<endl;
                return ;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i-1]==s[i])
            {
                if(s[i]==t[0])
                {
                    cout<<"No"<<endl;
                    return ;
                }
            }
        }
        cout<<"Yes"<<endl;
        return;
    }
    else cout<<"Yes"<<endl;
    return;

}
signed main()
{
di(t);
while(t--)
{
    solve();
}
return 0;
}