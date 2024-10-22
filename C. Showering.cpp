#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,s,m;cin>>n>>s>>m;
     int l,r=0;
     bool pos=false;
     for(int i=0;i<n;i++){
        cin>>l;
        int tm=l-r;
        cin>>r;
        if(tm>=s){
            pos=true;
        }
     }
     if(pos){
        cout<<"YES"<<endl;return;
     }
     if(m-r>=s)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
int main(){
    fast;
    int t=1;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


