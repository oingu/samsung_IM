#include <iostream>
using namespace std;
const int MOD = 1000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long total_sum = 0; 

        for (int x = 1; x <= n; ++x) {
            int y = n / x; 
            long long product = (long long)x * y;
            total_sum = (total_sum + product) % MOD;
        }
        cout << total_sum << "\n";
    }

    return 0;
}