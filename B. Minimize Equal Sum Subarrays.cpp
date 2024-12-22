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
     int ar[n];
     for(int i=0;i<n;i++)cin>>ar[i];
     for(int i=1;i<=n;i++){
        int tm=ar[i-1];
        tm+=1;
        if(tm>n)tm=1;
        ar[i-1]=tm;
     }
     print(ar);
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


