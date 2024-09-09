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
    int arr[n+1],brr[n+1],crr[n+1];
    for(int i=01; i<=n; i++)cin>>arr[i];
    string s;
    cin>>s;
    for(int i=1; i<=n; i++)brr[i]=0;
    for(int i=1; i<=n; i++) {
        vector<int>v;
        if(brr[i]==0) {
            int ct=0;
            v.pb(i);
            brr[i]=1;
            if(s[i-1]=='0')ct++;
            int tm=i,k=i;
            while(i!=arr[tm]) {
                tm=arr[tm];
                v.pb(tm);
                brr[tm]=1;
                if(s[tm-1]=='0')ct++;

            }
            for(auto it:v) {
                crr[it]=ct;
            }
        }
    }
    for(int i=1; i<=n; i++)cout<<crr[i]<<" ";
    cout<<endl;
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


