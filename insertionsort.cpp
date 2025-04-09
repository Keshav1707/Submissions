 #include<bits/stdc++.h>
 using namespace std;
 #define ll            long long int
 #define di(x)         ll x;cin>>x
 #define dia           di(a)
 #define din           di(n)
 #define dim           di(m)
 #define dik           di(k)
 #define dit           di(t)
 #define dix           di(x)
 #define diy           di(y)
 #define diz           di(z)
 #define veci          vector<int>
 #define vecll         vector<ll>
 #define pb            push_back
 #define po            pop_back
 #define all(x)        x.begin(),x.end()
 #define forl(i,l,u,m)   for(ll i=l; i<u; i+=m)
 #define for1(i,l,u)    forl(i,l,u,1)
 #define fors(n)       forl(i,0,n,1)
 #define el            <<endl;
 #define PI            3.14159265359
 #define MOD             int(1e9+7)
#define foran(x)       for (auto &&i : x)
 typedef pair<ll,ll> pairs;
 vector <ll> adj[4004];
 int main()
 {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL); 
 int t;
 cin>>t;
 int a[t];
 for (auto &&i : a)cin>>i;
 int i=1;
 while(i<t)
 {
    int temp = a[i],j=i;
    while(j--)
    {
        if(a[j]>temp)
        {
            a[j+1]=a[j];
        }
        else break;
    }
    a[j+1]=temp;
    i++;
 }
 for (auto &&i : a)cout<<i<<" ";
 cout<<endl;
}