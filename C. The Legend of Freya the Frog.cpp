#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int x,y,k;
     cin>>x>>y>>k;
     if(x>y){
        int x_ans=x/k;
        if(x%k>0)x_ans++;
        int y_ans=y/k;
        if(y%k>0)y_ans++;
        if(x_ans>y_ans){
            cout<<x_ans*2-1<<endl;
        }
        else cout<<x_ans*2<<endl;
     }
     else{
        int y_ans=y/k;
        if(y%k>0)y_ans++;
        cout<<y_ans*2<<endl;
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


