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
     ll x , y , z ; cin >> x >> y >> z ;
     ll a=0,b=0,c=0;
     for(ll i=0;i<=31;i++){
        if((1<<i)&x){
            a=a|(1<<i);
            b=b|(1<<i);
        }
     }
     for(ll i=0;i<=31;i++){
        if((1<<i)&y){
            b=b|(1<<i);
            c=c|(1<<i);
        }
     }
     for(ll i=0;i<=31;i++){
        if((1<<i)&z){
            c=c|(1<<i);
            a=a|(1<<i);
        }
     }
     if((a&b)==x && (b&c)==y && (c&a)==z)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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


