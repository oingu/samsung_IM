#include <iostream>
using namespace std;

typedef long long ll;

ll power(ll base, ll exp) {
    ll res = 1;
    if (base == 0 && exp == 0) return 1;
    if (base == 0) return 0;
    if (exp == 0) return 1;

    while (exp > 0) {
        if (exp & 1) {
            res = res * base;
        }
        if (exp > 1) {
             base = base * base;
        }
        exp >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        ll a, b;
        cin >> a >> b;

        ll result = power(a, b);

        cout << "#" << i << " " << result << "\n";
    }

    return 0;
}