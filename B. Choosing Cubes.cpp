#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve(){
     int n,f,k;cin>>n>>f>>k;
     vector<int>arr(n);
     for(int i=0;i<n;i++)cin>>arr[i];
     int fin=arr[f-1];
     srt(arr);
     reverse(arr.begin(),arr.end());
     --k;
     if(arr[k]==fin){
        if(k+1==n)cout<<"YES"<<endl;
        else {
            if(arr[k+1]==fin)cout<<"Maybe"<<endl;
            else cout<<"YES"<<endl;
        }
     }
     else if(arr[k]<fin)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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


