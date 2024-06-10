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
     string s;cin>>s;
     int tm=0,fin_ans=0;
     for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            tm++;
            fin_ans=max(fin_ans,tm);
        }else {
            fin_ans=max(fin_ans,tm);
            tm=0;
        }
     }
     cout<<fin_ans+2<<endl;

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


