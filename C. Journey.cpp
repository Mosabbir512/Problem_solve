#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 100005;
vector<int> g[N];
double total_ans = 0.0;
int depth[N];
int leafCount = 0;

void dfs(int node, int par, double prob) {
    bool isLeaf = true;
    double siz=g[node].size();
    for (auto child : g[node]) {
        if (child != par) {
            isLeaf = false;
            depth[child]=depth[node]+1;
            if(depth[node]==0)
            dfs(child, node, prob/(siz));
            else dfs(child,node,prob/(siz-1));
        }
    }
    if (isLeaf) {
        depth[node]=depth[par]+1;
        double dpth=depth[node];
       // cout<<prob<<" "<<dpth<<endl;
        total_ans+=(prob*dpth);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        g[i].clear();
    }
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    dfs(1, 0, 1);
    cout << fixed << setprecision(12) << total_ans << endl;
}

int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
