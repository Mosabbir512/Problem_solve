#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,k;cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     for(int i=0;i<n;i++){
        bool y=true;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            int sub=abs(arr[i]-arr[j]);
             if(sub%k==0){
                y=false;
                break;
             }
        }
        if(y){
            cout<<"YES"<<endl;
            cout<<i+1<<endl;
            return;
        }
     }
     cout<<"NO"<<endl;
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


