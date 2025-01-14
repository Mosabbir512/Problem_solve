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
    int lx,ly;
    cin>>lx>>ly;
    int mx=1;
    bool lastfall=true;
    for(int i=1; i<n; i++) {
        int x,y;
        cin>>x>>y;
        if(!lastfall && lx+ly<x) {
            mx++;
            if(x-y>lx+ly) {
                mx++;
                lastfall=true;
            }
        } else if( x-y>lx) {
            mx++;
            lastfall=true;
        } else {
            lastfall=false;
        }
    lx=x,ly=y;
    }
    if(!lastfall){
        mx++;
    }
    cout<<mx<<endl;
}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


