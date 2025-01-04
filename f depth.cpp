#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=4005;
vector<int>depth(N,0);
int mx=0;
void dfs(int v,vector<int> g[],int par=0) {
    for(auto child:g[v]) {
        if(child==par)continue;
        depth[child]=depth[v]+1;
        dfs(child,g,v);
    }
}
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>g[N];
    int tm=-1;
    set<int>st;
    for(int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
        tm=a;
        st.insert(a);
        st.insert(b);
    }
    dfs(tm,g,0);
    int mxx=0,ind=-1;
    for(auto it:st){
        if(depth[it]>mxx){
            mxx=depth[it];
            ind=it;
        }
        depth[it]=0;
    }
    dfs(ind,g,0);
    mxx=0;ind=-1;
    for(auto it:st){
        if(depth[it]>mxx){
            mxx=depth[it];
            ind=it;
        }
        depth[it]=0;
    }
    dfs(ind,g,0);
    //for(auto it:st)cout<<depth[it]<<" ";cout<<endl;
    int out=0,in=0;
    for(auto it:st){
        if(depth[it]==4 || depth[it]==2){
            out++;
        }
    }
    out;
    in=m-out;
    cout<<in<<" "<<out/in<<endl;

}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


