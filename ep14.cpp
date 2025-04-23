#include <bits/stdc++.h>
using namespace std;
int a[100][100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] != a[n+1-i][n+1-j] || a[i][j] != a[i][n+1-j]) {
                    cnt++;
                }
                
            }
        }
        cout << '#' << k << " ";
        if(cnt) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}