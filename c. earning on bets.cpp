#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
int lcm(int a,int b){
    return (a*1LL*b)/__gcd(a,b);
}
void solve() {
    ll n;
    cin>>n;
    ll arr[n];

    ll lm=1;
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
        lm=lcm(lm,arr[i]);
    }
    vector<int>v;
    ll sum=0;
    for(ll i=0; i<n; i++) {
        sum+=(lm/arr[i]);
        v.pb(lm/arr[i]);
    }
    if(sum<lm) {
        print(v);
    } else {
        cout<<-1<<endl;
    }




}
int main() {
    fast;
    ll t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

/*
10000
1
2
1
3
1
4
1
5
*/

/*
6
3
3 2 7
2
3 3
5
5 5 5 5 5
6
7 9 3 17 9 13
3
6 3 2
5
9 4 6 8 3
*/
