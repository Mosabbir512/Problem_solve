#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
//#define endl '\n'
void solve(){
     int n;cin>>n;
     string s;cin>>s;
     if(n==1)cout<<"YES"<<endl;
     else{
        float f=n;
        f=sqrt(f);
        if(ceil(f)==floor(f)){
            int tm=f*2+(f-2)*2,ct=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1')ct++;
            }
            if(ct==tm)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
     }
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


