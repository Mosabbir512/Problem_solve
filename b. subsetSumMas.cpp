#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

void solve() {
    int n;
    cin >> n; // Number of cupcakes
    vector<ll> a(n); // Tastiness of each cupcake

    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i]; // Total tastiness of all cupcakes
    }

    ll max_prefix_sum = LLONG_MIN, max_suffix_sum = LLONG_MIN;
    ll current_prefix_sum = 0, current_suffix_sum = 0;

    // Find the maximum prefix sum excluding the last cupcake
    for (int i = 0; i < n - 1; i++) {
        current_prefix_sum += a[i];
        max_prefix_sum = max(max_prefix_sum, current_prefix_sum);
        if (current_prefix_sum < 0) current_prefix_sum = 0;
    }
    current_prefix_sum=0;
    Find the maximum prefix sum excluding the first cupcake
    for (int i = 1; i < n; i++) {
        current_prefix_sum += a[i];
        max_prefix_sum = max(max_prefix_sum, current_prefix_sum);
        if (current_prefix_sum < 0) current_prefix_sum = 0;
    }

    /*   // Find the maximum suffix sum excluding the first cupcake
       for (int i = n - 1; i > 0; i--) {
           current_suffix_sum += a[i];
           max_suffix_sum = max(max_suffix_sum, current_suffix_sum);
           if (current_suffix_sum < 0) current_suffix_sum = 0;
       }
       current_suffix_sum=0;
        for (int i = n - 2; i >=0; i--) {
           current_suffix_sum += a[i];
           max_suffix_sum = max(max_suffix_sum, current_suffix_sum);
           if (current_suffix_sum < 0) current_suffix_sum = 0;
       }
       */

    // Check if the maximum tastiness Adel can achieve is strictly less than Yasser's total
    if (max_prefix_sum < total_sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
