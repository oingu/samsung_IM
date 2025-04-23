#include <iostream>
using namespace std;

char a[1000][1000];
char b[1000][1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++){
        int m, n;
        cin >> m >> n;
        for(int i = 10; i <= m+9; i++){
            for(int j = 10; j <= n+9; j++){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        for(int i = 10; i <= m+9; i++){
            for(int j = 10; j <= n+9; j++){
                if(b[i][j] == 'A'){
                    a[i-1][j] = 'X';
                    a[i+1][j] = 'X';
                    a[i][j-1] = 'X';
                    a[i][j+1] = 'X';   
                }
                else if(b[i][j] == 'B'){
                    a[i-1][j] = 'X';
                    a[i+1][j] = 'X';
                    a[i][j-1] = 'X';
                    a[i][j+1] = 'X';
                    a[i-2][j] = 'X';
                    a[i+2][j] = 'X';
                    a[i][j-2] = 'X';
                    a[i][j+2] = 'X';
                }
                else if(b[i][j] == 'C'){
                    a[i-1][j] = 'X';
                    a[i+1][j] = 'X';
                    a[i][j-1] = 'X';
                    a[i][j+1] = 'X';
                    a[i-2][j] = 'X';
                    a[i+2][j] = 'X';
                    a[i][j-2] = 'X';
                    a[i][j+2] = 'X';
                    a[i-3][j] = 'X';
                    a[i+3][j] = 'X';
                    a[i][j-3] = 'X';
                    a[i][j+3] = 'X';
                }
            }
            
        }
        int cnt = 0;
        for(int i = 10; i <= m+9; i++){
            for(int j = 10; j <= n+9; j++){
                if(a[i][j] == 'H')
                    cnt++;
            }
            cout << endl;
        }
        cout << "#" << k << " " << cnt << endl;
    }
}