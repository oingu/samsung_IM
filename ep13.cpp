#include <bits/stdc++.h>
using namespace std;
int a[1000111];

int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] == (a[i] + k) || a[j] == (a[i] - k)){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

}