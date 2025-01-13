#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll arr[n][m], brr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
            brr[i][j]=0;
        }
    }
    int l=0,h=0;brr[l][h]=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D'){
            ll sum=0;
            for(int j=0;j<m;j++){
                sum+=arr[l][j];
            }
          sum=sum*(-1);
          arr[l][h]=sum;
          l++;
        }
        else {
            ll sum=0;
            for(int j=0;j<n;j++){
                sum+=arr[j][h];
            }
            sum=sum*(-1);
            arr[l][h]=sum;
            h++;
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][m-1];
    }
    sum=sum*(-1);
    arr[n-1][m-1]=sum;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
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


