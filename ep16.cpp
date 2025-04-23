#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++){
        int n, m1, m2;
        cin >> n >> m1 >> m2;
        int a[1000];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n -1 ; i++){ // sorting
            int maxPos = i;
            for(int j = i+1; j <=n; j++){
                if(a[maxPos] < a[j]) maxPos = j;
            }
            int tmp;
            tmp = a[i];
            a[i] = a[maxPos];
            a[maxPos] = tmp;
        }
        int sum = 0;
        for(int i = 1; i<= max(m1,m2); i++){
            if(i <= min(m1,m2)) sum += (a[2*i - 1] + a[2* i]) * i;
            else sum += a[min(m1,m2) + i] * i;
        }
        cout << "#" << k << ' ' << sum << endl;
        
    }
}