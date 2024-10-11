#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,a,sum=0;cin>>n;
     vector<int>jor,bijor;
     for(int i=0;i<n;i++){
         cin>>a;
         if(a&1)bijor.pb(a);
         else jor.pb(a);
     }
     srt(jor);srt(bijor);reverse(jor.begin(),jor.end());reverse(bijor.begin(),bijor.end());
     int mn=min(jor.size(),bijor.size());
     if(jor.size()>mn+1){
        for(int i=mn+1;i<jor.size();i++){
            sum+=jor[i];
        }
     }
     if(bijor.size()>mn+1){
        for(int i=mn+1;i<bijor.size();i++){
            sum+=bijor[i];
        }
     }
     cout<<sum<<endl;
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


