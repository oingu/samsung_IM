#include <iostream>
#include <cmath>
using namespace std;

int cp(int n){
    long long can = sqrt(n);
    if(can * can == n) return 1;
    return 0;
}

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int a, b, cnt = 0;
        cin >> a >> b;
        cout << "#" << i ;
        for(int j = a; j <= b; j++){
            if(cp(j)) {
                cout << ' ' << j;
                cnt++;
            }
        }
        if(!cnt) cout << " NO NUMBER";
        cout << endl;
    }
}