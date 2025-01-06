#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define endl '\n'
const int mod=1e9+7;
const int N=2005;

int dp[N][N];

ll fun(int n,int k,int i) {
    if(k<=0)return 1;
    if(dp[i][k]!=-1)return dp[i][k];
    ll ans=0;
    for(int j=i; j<=n; j+=i) {
        if(j%i==0) {
            ans+=fun(n,k-1,j)%mod;
            ans%=mod;
        }
    }
    return dp[i][k]=ans;
}

void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=k; j++) {
            dp[i][j]=-1;
        }
    }
    ll result=0;
    for(int i=1; i<=n; i++) {
        result+=fun(n,k-1,i);
        result%=mod;
    }
    cout<<result<<endl;
}

int main() {
    fast;
    int t=1;
    while(t--) {
        solve();
    }
    return 0;
}
