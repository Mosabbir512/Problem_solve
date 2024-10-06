#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,k,a;
    cin>>n>>k;
    int arr[n];
    int ans=0,sum=0;
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a>=k) {
            sum+=a;
        } else if(a==0) {
            if(sum) {
                --sum;
                ++ans;
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


