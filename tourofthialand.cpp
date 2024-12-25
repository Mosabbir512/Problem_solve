#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        // Read inputs for each test case
        int b1, t1, b2, t2;
        cin >> b1 >> t1 >> b2 >> t2;

        // Calculate R and F
        int R = (t2 - t1) / (b2 - b1); // Exchange rate (R)
        int F = t1 - (R * b1);         // Fixed value added tax (F)

        // Output the results
        cout << R << " " << F << endl;
    }

    return 0;
}
