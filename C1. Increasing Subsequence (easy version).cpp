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
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    vector<char>v;
    int tm=0;
    for(int i=0,j=n-1; i<=j;) {
        int mn=min(arr[i],arr[j]);
        int mx=max(arr[i],arr[j]);
        if(mn>tm) {
            if(arr[i]==mn) {
                v.pb('L');
                ++i;
            } else {
                v.pb('R');
                --j;
            }
            tm=mn;
        } else if(mx>tm) {
            if(arr[i]==mx) {
                v.pb('L');
                ++i;
            } else {
                v.pb('R');
                --j;
            }
            tm=mx;
        } else {
            cout<<i<<" "<<j<<endl;
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v)cout<<it;
    cout<<endl;
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


