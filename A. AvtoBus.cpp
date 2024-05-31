#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     ll n;cin>>n;
     if(n<=6){
        if(n==4 || n==6)cout<<1<<" "<<1<<endl;
        else cout<<-1<<endl;
        return;
     }
     int r=n%6;
     if(r==1 || r==3 || r==5){
        cout<<-1<<endl;
        return;
     }
     ll mx=n/4;
     ll mn=n/6;
     if(r!=0)mn++;
     cout<<mn<<" "<<mx<<endl;;
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


