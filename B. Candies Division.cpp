#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,k;cin>>n>>k;
     int div=n/k;
     int r=n%k;
     n-=r;
     if(r>=k/2)n+=k/2;
     else  n+=r;
     cout<<n<<endl;
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


