
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,a;
    int ct=0;
    cin>>n>>a;
    for(int i=0; i<n-1; i++) {
        int b;
        cin>>b;
        int c=abs(a-b);
        if(c==5 || c==7) {
            a=b;
            ct++;
        }
    }if(ct==n-1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

