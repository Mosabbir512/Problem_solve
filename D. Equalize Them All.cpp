
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n;cin>>n;
     vector<int>v(n);
     map<int,int>mp;
     for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
     }
     int mx=0,tm=0,ind;
     for(auto it:mp){
        int temp=it.second;
        if(temp>=mx){
            mx=temp;
            tm=it.first;
        }
     }
     for(int i=0;i<n;i++){
         if(v[i]==tm)ind=i;
     }
     cout<<n-mx<<endl;
     for(int i=ind;i>=0;i--){
        if(v[i]==tm)continue;
        else {
            if(v[i]<tm)
                cout<<1<<" "<<i+1<<" "<<i+1+1<<endl;
            else cout<<2<<" "<<i+1<<" "<<i+1+1<<endl;
        }
     }

     for(int i=ind;i<n;i++){
        if(v[i]==tm)continue;
        else{
            if(tm<v[i])
                cout<<2<<" "<<i+1<<" "<<i<<endl;
            else cout<<1<<" "<<i+1<<" "<<i<<endl;
        }
     }

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

