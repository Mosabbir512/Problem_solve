#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x: a)cin>>x;
    if(n==k){
        int i;
        for(i=0;i<n/2;i++){
            int j=i*2+1;
            if(i+1!=a[j]){
                cout<<i+1<<endl;
                return;
            }
        }
        cout<<i+1<<endl;
        return;
    }
    --k;
    n-=(k-1);
    for(int i=1;i<n;i++){
        if(a[i]==1){
            continue;
        }
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;

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

