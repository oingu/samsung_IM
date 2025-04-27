#include <iostream>
using namespace std;

int a[10001][10001];
int n, m;
int b[1001];
int que[1001][1001];

void init(){
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            a[i][j] = 0;
        }
    }
    for(int i = 1; i <= 1000; i++){
        b[i] = 1001;
    }

}


void input(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++){
        int tmp;
        cin >> tmp;
        if(tmp >= 1 && tmp <=n)
            b[tmp] = 0;
    }
}

void solve(){
    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                que[i][k] = j; 
                k++;         
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(b[i] == 0){
            for(int j = 1; j <= 1001; j++){
                b[que[i][j]] = 1;
            }
        }
        if(b[i] == 1){
            for(int j = 1; j <= 1001; j++){
                b[que[i][j]] = 1;
            }
        }
    }
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
        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= n;j++){
        //         cout << a[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        solve();
        int f1 = 0, f2 = 0;
        for(int i = 1; i <= n; i++){
            if(b[i] == 1) f1++;
            if(b[i] == 2) f2++;
        }
        // for(int i = 1; i <= n; i++){
        //     cout << b[i] <<' ';
        // }
        // cout << endl;
        cout << "#" << t << ' ' << f1 << ' ' << f2 << endl;
    }
}