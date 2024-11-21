#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int k;cin>>k;
     int n=k-2;
     int arr[k];
     map<int,int>mp,mp2;
     for(int i=0;i<k;i++){
        cin>>arr[i];
        mp[arr[i]]++;
     }
     for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int f=i,s=n/i;
            if(f==s){
                if(mp[f]>=2){
                    cout<<f<<" "<<s<<endl;
                    return ;
                }
            }else{
                 if(mp.find(f)!=mp.end() && mp.find(s)!=mp.end()){
                    cout<<f<<" "<<s<<endl;
                    return;
                 }
            }
        }
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


