#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int a,b,ans=0;
    cin>>a>>b;
    while(a!=0 && b!=0) {
        if(a>=b) {
            ans+=a/b;
            a%=b;
        } else {
            ans+=b/a;
            b%=a;
        }
        if(a==b){
            ++ans;break;
        }
    }
    //cout<<a<<" "<<b<<endl;
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


