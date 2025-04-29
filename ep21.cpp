#include <iostream>
#include <cmath>

using namespace std;

int a[1000][1000];
int n, m, K;

void input(){
    cin >> n >> m >> K;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int subMatrixSum(int r, int c){
    int sum = 0;
    for(int i = r; i <= r+m-1; i++){
        for(int j = c; j <= c+m-1; j++){
            sum += a[i][j];
        }
    }
    return sum;
}

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    for(int k = 1; k <= tc; k++){
        input();
        pair<int,int> ans = make_pair(1e9+7, 1e9);
        int x, y;
        for(int i = 1; i <= n-m+1; i++){
            for(int j = 1; j <= n-m+1; j++){
                int tmp = abs(K - subMatrixSum(i, j));
                if(ans > make_pair(tmp, subMatrixSum(i, j))){
                    ans = make_pair(tmp, subMatrixSum(i, j));
                    x = i;
                    y = j;
                }
            }
        }
        cout << "#" << k << " " << x-1 << " " << y-1 << endl;
    }

}