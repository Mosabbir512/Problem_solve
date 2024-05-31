#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    bool pos=false;
    for(int i=2;i*i<=sum;i++){
        if(sum%i==0){
            pos=true;
            break;
        }
    }
    if(pos){
        cout<<n<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        return;
    }
    int ind;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            ind=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=0;i<n;i++){
        if(ind==i)continue;
        else cout<<i+1<<" ";
    }
    cout<<endl;

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


