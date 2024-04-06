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
signed main()
{
di(n);
di(m);
vector<vector<char>>v(n+2,vector<char>(m+2,'.'));
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= m; j++)
    {
        /* code */
        char c;
        cin>>c;
        v[i][j]=c;
    }
}
int c=0;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= m; j++)
    {
        /* code */
        if(v[i][j]=='W')
        {
            if(v[i-1][j]=='P')c++,v[i-1][j]='.';
            else if(v[i][j-1]=='P')c++,v[i][j-1]='.';
            else if(v[i][j+1]=='P')c++,v[i][j+1]='.';
            else if(v[i+1][j]=='P')c++,v[i+1][j]='.';
        }
    }
}
cout<<c<<endl;
return 0;
}