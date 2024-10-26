#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    int ans=0;
    for(int i=0; i<n; i++) {
        int mn=0;
        for(int j=0,k=i; j<n-i; j++,k++) {
            mn=min(mn,arr[k][j]);
        }
        if(mn<0)ans+=(-1*mn);
    }
    for(int i=1; i<n; i++) {
        int mn=0;
        for(int j=0,k=i; j<n-i; j++,++k) {
            mn=min(mn,arr[j][k]);
        }

        if(mn<0)ans+=(-1*mn);
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


