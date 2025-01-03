#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> results;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Count of odd numbers up to n
        long long oddCount = (n + 1) / 2;

        if (k <= oddCount) {
            // k-th odd number
            results.push_back(2 * k - 1);
        } else {
            // k-th even number
            k -= oddCount;
            results.push_back(2 * k);
        }
    }

    for (long long result : results) {
        cout << result << "\n";
    }

    return 0;
}
