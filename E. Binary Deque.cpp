#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,s,sum=0;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<s) {
        cout<<-1<<endl;
        return;
    }
    vector<int>v;
    int ans=0,tm=0,j=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==1) {
            v.pb(i);
        }
        if(v.size()==s)ans=i+1;
        if(v.size()>s) {
            int j=v[v.size()-s-1];
            ans=max(ans,i-j);
        }
        //cout<<"ans= "<<ans<<" ";
    }
    cout<<n-ans<<endl;
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


