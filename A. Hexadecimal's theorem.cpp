#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
const int N=1e9+7;
void solve() {
    int n;
    vector<int>fib;
    fib.pb(0);
    fib.pb(1);
    int temp=1;
    while(temp<N) {
        int tm=fib.size();
        fib.pb(fib[tm-1]+fib[tm-2]);
        temp=fib[tm];
    }
    cin>>n;
    vector<int>ans;
    while(n) {
        int ind=lower_bound(fib.begin(),fib.end(),n)-fib.begin();
        if(fib[ind]>n)ind--;
        ans.pb(fib[ind]);
        n-=fib[ind];
    }
    for(auto it:ans)cout<<it<<" ";
    temp=ans.size();
    temp=3-temp;
    for(int i=0; i<temp; i++)cout<<0<<" ";
    cout<<endl;

}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


