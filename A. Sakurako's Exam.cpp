#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int a,b;cin>>a>>b;
     if(b&1){
        if(a>=2){
            a-=2;
            if(a&1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     else{
        if(a&1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
     }
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

