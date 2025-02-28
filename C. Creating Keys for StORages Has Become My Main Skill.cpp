#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n=10,x;
    cin>>n>>x;
    int ind=-1;
    for(int i=30; i>=0; i--) {
        //cout<<((n>>i)&1);
        if(((x>>i)&1)==1) {
            ind=i;
            break;
        }
    }
   // cout<<endl<<x<<" "<<ind<<" = "<<ind<<endl;

    vector<int>v;//
    int k=n;
    if(pow(2,ind)<n) {

    } else {
        v.push_back(x);
        --n;
    }
    int i=0;
    while(n--) {
        int tm=x|i;
        if(x==tm)v.push_back(i);
        ++i;
    }
    while(v.size()<k) {
        v.push_back(v[0]);
    }
    print(v);


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


