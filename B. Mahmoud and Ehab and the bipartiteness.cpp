
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int vis[N];
int level[N];
int color[N];
void bfs(int source) {
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()) {
        int cur_v=q.front();
        q.pop();
        for(int child:g[cur_v]) {
            if(!vis[child]) {
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++) {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);
    int one=0,two=0;
    for(int i=1; i<=n; i++) {
        if(level[i]%2)color[i]=1,one++;
         else color[i]=2,two++;
    }
   cout<<(one*1LL*two)-(n-1)<<endl;

    return 0;
}


