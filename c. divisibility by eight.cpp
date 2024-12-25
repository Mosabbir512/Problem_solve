#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     string s;cin>>s;
     int n=s.size();
     for(int i=0;i<n;i++){
        int tm=s[i]-'0';
        if(tm%8==0){
          cout<<"YES"<<endl<<tm<<endl;
                    return;
        }
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int tm=(s[i]-'0')*10+s[j]-'0';
            if(tm%8==0){
                cout<<"YES"<<endl<<tm<<endl;
                    return;
            }
        }
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int tm=(s[i]-'0')*100+(s[j]-'0')*10+s[k]-'0';
                if(tm%8==0){
                    cout<<"YES"<<endl<<tm<<endl;
                    return;
                }
            }
        }
     }
     cout<<"NO"<<endl;
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

