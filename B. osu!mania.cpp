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
    vector<int>v;
    for(int i=0; i<n; i++) {
        string s;cin>>s;
        for(int j=0;j<4;j++){
            if(s[j]=='#'){
                v.pb(j+1);
                break;
            }
        }
    }
    reverse(v.begin(),v.end());
    print(v);
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


