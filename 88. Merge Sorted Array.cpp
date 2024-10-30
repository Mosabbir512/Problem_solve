#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v;
    for(int i=0;i<m;i++){
        v.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
        v.push_back(nums2[i]);
    }
    sort(v.begin(),v.end());
    int i=0;
    for(auto it:v){
        nums1[i]=it;
        ++i;
    }
    print(nums1);
}
void solve() {
    vector<int>v1={1,2,3,0,0,0};
    vector<int>v2= {2,5,6};
    merge1(v1,3,v2,3);
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


