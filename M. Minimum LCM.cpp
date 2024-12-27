
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
    int tm=1;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0){
            tm=i;
            break;
        }
    }
    tm=max(tm,n/tm);
    if(tm==n)cout<<1<<" "<<n-1<<endl;
    else
        cout<<tm<<" "<<n-tm<<endl;
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

