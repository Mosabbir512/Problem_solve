#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,tm;cin>>n;
     vector<int>v(n);vector<int>a,b;
     set<int>sa,sb;
     for(int i=0;i<n;i++)cin>>v[i];
     srt(v);
     tm=-1;
     for(int i=0;i<n;i++){
        if(tm==v[i]){
            b.pb(v[i]);
            sb.insert(v[i]);
        }
        else {
            a.pb(v[i]);
            sa.insert(v[i]);
        }
        tm=v[i];
     }
     if(sa.size()==a.size() && sb.size()==b.size()){
        cout<<"YES"<<endl;
        srt(a);srt(b);reverse(b.begin(),b.end());
        cout<<sa.size()<<endl;print(a);
        cout<<sb.size()<<endl;print(b);
     }
     else cout<<"NO"<<endl;

}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}


