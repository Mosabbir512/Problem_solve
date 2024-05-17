#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    ll a,b,mn,mx;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0"<<endl;
        return;
    }
    if(a>b)mx=a,mn=b;
    else mx=b,mn=a;
    ll gc=mx-mn;
    ll r1=mx%gc;
    ll r2=gc-r1;
    cout<<gc<<" "<<min(r1,r2)<<endl;
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


