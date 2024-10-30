#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
#define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
int removeElement(vector<int>& nums, int val) {
    int inf=1e9+7;
    int k=0;
    vector<int>v;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]==val) {
            nums[i]=inf;
            k++;
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++)cout<<nums[i]<<" ";
    cout<<endl;
    return nums.size()-k;
}
void solve() {
    vector<int>nums= {0,1,2,2,3,0,4,2};
    int val=2;
    cout<<removeElement(nums,val);
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

