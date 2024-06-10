#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define srt(x) sort(x.begin(),x.end());
#define pb(x) push_back(x);
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl;
#define ll long long
const int N=1e3+10;
void solve() {
    vector<int>mov= {2,3,5,7,11,13,17,19,23,29,31};
    vector<int>color(N);
    for(int i=0; i<N; i++)color[i]=0;
    for(int j=mov.size()-1; j>=0;--j ){
        int tm=mov[j];
        for(int i=2; i<N; i++) {
            if(i%tm==0)
                color[i]=j+1;
        }
    }
    pair<int,int>pr[12];
    int n;
    cin>>n;
    int arr[n];
    set<int>st;
    vector<int>ans;
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n; i++) {
        if(color[arr[i]]) {
            ans.pb(color[arr[i]]);
            st.insert(color[arr[i]]);
        } else {
            ans.pb(11);
            st.insert(11);
        }
    }
//    int ct=0;
//    for(auto it:st){
//        pair<int,int>temp={++ct,it};
//        pr[ct]=temp;
//    }
//    for(int i=1;i<=11;i++){
//        cout<<pr[i].first<<" "<<pr[i].second<<endl;
//    }
     int ct=0;
     int brr[12];for(int i=0;i<12;i++)brr[i]=0;
     for(auto it:st){
        int tm=it;
        brr[tm]=++ct;
     }
    cout<<st.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<brr[ans[i]]<<" ";
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


