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
vector<vector<char>> rota(vector<vector<char>>v) 
{
    vector<vector<char>>matrix=v;
    reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    return matrix;
}
signed main()
{
di(t);
while(t--)
{
    di(x);
    vector<vector<char>>v;
    for (size_t i = 0; i < x; i++)
    {
        /* code */
        vector<char>m;
        for (size_t j = 0; j < x; j++)
        {
            /* code */
            char c;
            cin>>c;
            m.pb(c);
        }
        v.pb(m);
    }
    vector<vector<char>>va=rota(v);
    vector<vector<char>>vb=rota(va);
    vector<vector<char>>vc=rota(vb);
    ll ans=0;
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            char x=max(max(v[i][j],va[i][j]),max(vb[i][j],vc[i][j]));
            ans+=x-v[i][j]+x-va[i][j]+x-vb[i][j]+x-vc[i][j];
        }
    }
    cout<<ans/4<<endl;
}
return 0;
}