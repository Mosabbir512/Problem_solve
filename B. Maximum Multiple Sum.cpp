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
     int ans=0,tm=2,temp=0;
     for(int i=2;i<=n;i++){
            temp=0;
        for(int j=1;j*i<=n;j++){
            temp+=(j*i);
        }
        if(temp>ans)tm=i,ans=temp;
     }
     cout<<tm<<endl;
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


