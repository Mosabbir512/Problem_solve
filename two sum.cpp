#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define srt(x) sort(x.begin(),x.end())
//define pb(x) push_back(x)
#define print(x) for(auto it: x)cout<<it<<" ";cout<<endl
#define ll long long
#define endl '\n'
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,vector<int>>mp;
    int i=0;
    for(auto it:nums) {
        mp[it].push_back(i);
        ++i;
    }
    int a,b;
    for(auto it:mp) {
        bool pos=false;
        int first=it.first;
        int tar=target-it.first;
        if(tar*2==target) {
            vector<int>temp;
            for(auto val:mp[tar])temp.push_back(val);
            a=mp[first][0];
            b=mp[tar][1];
           break;
        } else {
            if(mp.find(tar)!=mp.end()) {
                vector<int>temp;
                for(auto val:mp[tar])temp.push_back(val);
                a=mp[first][0];
                b=mp[tar][0];
                pos=true;
            }
            if(pos)break;
        }
    }
    return {a,b};
}
void solve() {
    vector<int>v= {3,3,9,2};
    int n=6;
    vector<int>ans=twoSum(v,n);
    print(ans);
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


