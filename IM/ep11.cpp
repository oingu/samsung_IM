#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int max = 0;
        
        int h, w, m, n;
        cin >> h >> w >> m >> n;
        int a[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int tmp;
                cin >> tmp;
                if(tmp%2 == 0) a[i][j] = tmp;
                else a[i][j] = 0;
            }
        }
        for(int i = 0; i < m-h; i++){
            for(int j = 0; j < n-w; j++){
                int sum = 0;
                for(int p = i; p < i+h; p++){
                    for(int q = j; q < j+w; q++){
                        if(p == i || q == j || p == i+h-1 || q == j+w-1){
                            sum += a[p][q];
                        }     
                          
                    }
                }
                if(max < sum) max = sum;
            }
        }
        cout << "#" << i << ' ' << max << endl;
    }
}