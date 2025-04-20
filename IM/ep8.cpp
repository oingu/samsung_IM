#include <iostream>
#include <cmath>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        long long n;
        cin >> n;
        cout << "#" << i << ' ' <<  floor(sqrt(n)) << endl;
    }
}