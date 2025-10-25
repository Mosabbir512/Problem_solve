#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
ll gcd( ll a, ll b){
    return b == 0 ? a : gcd( b , a % b ) ;
}

ll lcm( ll a , ll b ){
    return ( a / gcd( a , b) ) * b;
}
void solve(){
     ll n , q ; cin >> n >> q ;
     string str,s;cin>>s;
     vector<ll>v;
     for(ll i = 0  ; i< n ; i++ ){
        if(s[i]=='B')str.pb('B'),v.pb(1);
        else {
            ll ct=0;
            while(i<n && s[i]=='A'){
                ++ct;
                ++i;
            }
            str.pb('A');v.pb(ct);
            --i;
        }
     }
     while(q--){
        ll val; cin >> val;
        ll n = str.size();

        if(n==1 && str[0]=='A')cout<<val<<endl;
        else {
            ll ans=0,ind=0;
            while(val>0){
                ind%=n;
                if(str[ind]=='B')ans+=v[ind],val/=2;
                else ans+=min(v[ind],val),val-=min(v[ind],val);
                ++ind;
            }
            cout<<ans<<endl;
        }

     }

}
int main(){
    fast;
    int t = 1;
    cin >> t;
    while( t-- ){
       solve();
    }
    return 0;
}


