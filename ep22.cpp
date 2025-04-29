#include <iostream>
using namespace std;

int a[1001][1001], b[1001][1001]; // a matran thuc
const int X[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int Y[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, k, m, d; // matrix_size, 1, 2, 3

void init(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
            b[i][j] = 0;
        }
    }
}

void input(){
    cin >> n >> k >> m >> d;
    int i = 1;
    while(k--){
        int x, y;
        cin >> x >> y;
        a[x][y] = ++i; 
    }
    while(m--){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    while(d--){
        int x, y;
        cin >> x >> y;
        b[x][y] = 1;   
    }
}

int countTarget(int r, int c){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        int _r = r + X[i];
        int _c = c + Y[i];
        if(_r >= 0 && _r < n && _c >= 0 && _c < n && a[_r][_c] > 0 && !b[_r][_c]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int tc;
    cin >> tc;
    for(int t = 1; t <= tc; t++){
        init();
        input();
        int res = -1;
        int idx = 100001;
        int x, y;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((a[i][j] > 1)){
                    if (res < countTarget(i, j)) {
                        res = countTarget(i, j);
                        x = i, y = j;
                        idx = a[i][j];
                    }
                    else {
                        if (res == countTarget(i, j) && idx > a[i][j]) {
                            idx = a[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
            //cout << endl;
        }
        cout << "#" << t << " " << x << " " << y << " " << res << endl;
    }
}