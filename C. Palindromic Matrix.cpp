#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void solve() {
    int n,k;
    cin>>n;
    int haha=n*n-(n+n-1);
    haha/=4;
    int arr[n*n],ans[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)ans[i][j]=-1;
    }
    map<int,int>mp;
    for(int i=0; i<n*n; i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(n&1) {
        for(auto it:mp) {
            if(it.second&1) {
                k=it.first;
                mp[k]--;
                break;
            }
        }
    }
    vector<int>v,v2;
    bool no=false;
    //for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
    for(auto it:mp) {
        int ind=it.first,val=it.second;
        if(val&1) {
            no=true;
            break;
        } else {
            while(val>=4) {
                v.pb(ind);
                val-=4;
            }
            if(val)v2.pb(ind);
        }
    }
    // for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;

    if(no)cout<<"NO"<<endl;
    else if(v.size()<haha && (n&1)) {
        cout<<"NO"<<endl;
    } else {
        if(n%2==0) {
            if(v.size()<(n*n)/4) {
                cout<<"NO"<<endl;
                return;
            }
        }
        int p=0;
        cout<<"YES"<<endl;
        //cout<<"vector==";
        //print(v);
        int nn=n-1;
        for(int i=0; i<n/2; i++) {
            for(int j=0; j<n/2; j++) {
                int y1=j,y2=nn-j;
                int x1=i,x2=nn-i;
                ans[x1][y1]=v[p];
                ans[x1][y2]=v[p];
                ans[x2][y1]=v[p];
                ans[x2][y2]=v[p];
                p++;
            }
        }

        if(n&1) {
            ans[n/2][n/2]=k;
            k=n/2;
            if(v.size()!=p) {
                for(; p<v.size(); p++) {
                    v2.pb(v[p]);
                    v2.pb(v[p]);
                }
            }
            p=0;
            for(int i=0; i<k; i++) {
                int y=n/2;
                int x1=i,x2=nn-i;
                ans[x1][y]=v2[p];
                ans[x2][y]=v2[p];
                ++p;
            }
            for(int i=0; i<k; i++) {
                int x=n/2;
                int y1=i,y2=nn-i;
                ans[x][y1]=v2[p];
                ans[x][y2]=v2[p];
                ++p;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++)cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }

}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


