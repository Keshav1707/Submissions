#include<bits/stdc++.h>
using namespace std;
vector<long long> adj[1000];
long long visited[100005];
void dfs(long long x){
    cout<<x;
    visited[x]=1;
    for(auto a: adj[x]){ // adj[0]-> 3 4
        if(!visited[a]){ dfs(a);}
    }
}
int main(){
    long long n; cin>>n; //no.of nodes
    for(long long i=0;i<n;i++) {adj[i].clear(); visited[i]=false;}
    for(long long i=0;i<n;i++) {   //n nodes 
        long long m; cin>>m;   //ith node m nodes se connected 
        for(long long j=0;j<m;j++){ long long x; cin>>x; adj[i].push_back(x);}
    }
    
    for(long long i=0;i<n;i++){
        if(!visited[i]) dfs(i);
    }

}