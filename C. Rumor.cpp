#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=1e5+5;
vector<int>g[N];
vector<ll>cost(N,0);
int vis[N];
ll dfs(int v,int par){
    ll ans=cost[v];
    vis[v]=1;
    for(auto child:g[v]){
        if(vis[child])continue;
        ans=min(ans,dfs(child,v));
    }
    return ans;
}
void solve(){
     int n,m;cin>>n>>m;
     for(int i=1;i<=n;i++)cin>>cost[i];
     for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
     }
     ll final_ans=0;
     for(int i=1;i<=n;i++){
        if(!vis[i])
           final_ans+=dfs(i,0);
     }
     cout<<final_ans<<endl;

}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


