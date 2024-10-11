#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     string s;cin>>s;
     int n=s.size();
     srt(s);
     for(int i=0;i<n-1;i++){
        if(s[i+1]-s[i]==1)
            continue;
        else {
            cout<<"NO"<<endl;
            return;
        }
     }
     cout<<"YES"<<endl;
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


