#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;
 
bool dfs(int v){
    visited[v] = true;
    bool res = true;
    for(auto node: adj[v]){
        if(!visited[node])
            if(!dfs(node)) res = false;
    }
    if(adj[v].size()!=2) return false;
    return res;
}
 
void solve(){
    int n, m; cin>>n>>m;
    adj.resize(n+1);
    for(int i=0; i<=n; i++) adj[i].clear();
    visited.resize(n+1, false);
    for(int i=1; i<=m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res = 0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(dfs(i)) res++;
        }
    }
    cout<<res;
    
    
    
}
signed main()
{
    int t = 1;
    //cin >> t;
    int i = 0;
    while (t--)
    {
        solve();
    }
       
    
    return 0;
}