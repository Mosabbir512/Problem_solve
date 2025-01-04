#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
const int N=1e5+7;
const int M=1e3+5;
int n,m;
bool vis[M][M];
int g[M][M];
vector<int>movx={0,0,-1,1};
vector<int>movy={1,-1,0,0};
bool isV(int x,int y){
    return x>=0 && y>=0 && x<n && y<m && !vis[x][y] && g[x][y]>0;
}
int dfs(int i,int j) {
    vis[i][j]=true;
    int sum=g[i][j];
    for(int tm=0;tm<4;tm++){
        int x=i+movx[tm];
        int y=j+movy[tm];
        if(isV(x,y)){
            sum+=dfs(x,y);
        }
    }
    return sum;
}
void solve() {
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>g[i][j];
            vis[i][j]=false;
        }
    }
    int ans=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(g[i][j]>0 && !vis[i][j]) {
                ans=max(ans,dfs(i,j));
            }
        }
    }
    cout<<ans<<endl;

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


