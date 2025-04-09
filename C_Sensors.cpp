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
vector<vector<char>>v(n+2,vector<char>((m+2),'.'));
ll c=0;
for (size_t i = 1; i < n+1; i++)
{
    /* code */
    for (int j = 1 ; j < m+1; j++)
    {
        /* code */
        char x;
        cin>>x;
        v[i][j]=x;
    }
    
}
for (size_t i = 0; i < n+2; i++)
{
    /* code */
    for (int j = 0 ; j < m+2; j++)
    {
        /* code */
        cout<<v[i][j]<<" ";
        
    }
    cout<<endl;
    
}

for (size_t i = 1; i < n+1; i++)
{
    /* code */
    for (int j = 1 ; j < m+1; j++)
    {
        /* code */
        if(v[i][j]=='#')
        {
            if(v[i-1][j]=='.'&&v[i-1][j-1]=='.'&&v[i][j-1]=='.')c++;
        }
    }
    
}
cout<<c<<endl;

return 0;
}