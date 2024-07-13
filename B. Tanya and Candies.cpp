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
    int arr[n+1];
    int odd=0,even=0;
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
        if(i&1)odd+=arr[i];
        else even+=arr[i];
    }
    int ans=0,con_odd=0,con_even=0,remain_odd=0,remain_even=0;
    vector<int>v;
    for(int i=1; i<=n; i++) {
        if(i&1) {
            remain_odd=odd-con_odd-arr[i];
            remain_even=even-con_even;
            //cout<<odd<<" "<<even<<" "<<con_odd<<" "<<con_even<<" "<<remain_odd<<" "<<remain_even<<endl;
            if(con_odd+remain_even==con_even+remain_odd)ans++,v.pb(i);
             con_odd+=arr[i];
        } else {
            remain_odd=odd-con_odd;
            remain_even=even-con_even-arr[i];
            //cout<<odd<<" "<<even<<" "<<con_odd<<" "<<con_even<<" "<<remain_odd<<" "<<remain_even<<endl;
            if(con_odd+remain_even==con_even+remain_odd)ans++,v.pb(i);
            con_even+=arr[i];
        }
    }
    cout<<ans<<endl;
    //print(v);
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


