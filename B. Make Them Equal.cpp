
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,k=0;
    cin>>n;
    int arr[n];
    set<int>s;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    vector<int>v;
    for(auto it:s)v.pb(it);
    if(v.size()>3){
        cout<<-1<<endl;
        return;
    }
    if(v.size()==3){
        if(v[2]-v[1]==v[1]-v[0])
            cout<<v[2]-v[1]<<endl;
        else cout<<-1;

    }
    else if(v.size()==2){
        int tm=v[1]-v[0];
        if(tm&1)cout<<tm<<endl;
        else cout<<tm/2<<endl;
    }else cout<<0<<endl;
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

