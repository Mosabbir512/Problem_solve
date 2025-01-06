#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
const int N=1e5+5;
int arr[N];
int n;
int sumOfDigit(int i,int j,vector<int>&v) {
    return v[j]-v[i-1];
}
vector<int> prefixSum(string &s) {
    vector<int>v;
    v.pb(0);
    for(int i=0; i<s.size(); i++) {
        v.pb(v[v.size()-1]+(s[i]-'0'));
    }
    return v;
}

void solve() {
    cin>>n;
    string s;
    cin>>s;
    vector<int>pre=prefixSum(s);
    unordered_map<int,int>mp;
    mp[0]=1;
    ll ans=0,tm=0,s1=0;
    for(int i=0;i<n;i++){
        s1+=(s[i]-'0');
        int key=s1-1-i;
        ans+=mp[key];
        mp[key]++;
    }
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


