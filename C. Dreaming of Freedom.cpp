#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,k;
    cin>>n>>k;
    if(n&1) {
        if(n==1)cout<<"YES"<<endl;
        else if(k>=n)cout<<"NO"<<endl;
        else {
            int tm=-1;
            for(int i=2; i*i<=n; i++) {
                if(n%i==0){
                    tm=i;
                    break;
                }
            }
            if(tm==-1)cout<<"YES"<<endl;
            else {
                if(tm<=k)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    } else {
        if(k>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
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


