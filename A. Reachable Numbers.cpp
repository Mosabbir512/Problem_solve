#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
    int n;cin>>n;
    set<int>ans;
    ans.insert(n);
    while(n>0){
        ++n;
        while(n%10==0){
            n/=10;
        }
        ans.insert(n);
        if(n==1)break;
    }
    for(int i=1;i<10;i++)ans.insert(i);
    cout<<ans.size()<<endl;
    //print(ans);
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


