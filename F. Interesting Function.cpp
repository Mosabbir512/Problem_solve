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
    int a=n,b=k,d=1;
    for(int i=1;i<=9;i++){
        d*=10;
        a+=n/d;
        b+=k/d;
    }

    //cout<<a<<" "<<b<<endl;
    cout<<b-a<<endl;

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

/*
while(k>9) {
        sum+=(k+(k/10));
        int d=k,ct=1;
        while(d>9) {
            ct*=10;
            d/=10;
        }
        ct*=d;
        k-=d;
    }
    cout<<ans<<" "<<sum<<endl;
    ans+=n;
    sum+=k;
    cout<<ans<<" "<<sum<<endl;
    cout<<sum-ans<<endl;
*/


