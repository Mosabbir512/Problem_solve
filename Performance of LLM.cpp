#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    double t,l,k;
    cin>>t>>l>>k;
    ll lw=0,h=k,mid;
    while (h-lw>1) {
        mid= (lw+h)/2;
        double tm=((mid/t)*(mid/t))/l+mid;
        if(tm<=k)
            lw=mid;
        else
            h=mid-1;
    }
    if (((h/t)*(h/t))/l+h<=k)
        cout<<h<<endl;
    else
        cout<<lw<<endl;

}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


