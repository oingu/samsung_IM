#include <iostream>
using namespace std;

int n;
int corrPass[10];
int inputPass[10];
int keyboard[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {-1, 0, -2}};
int X[4] = {-1, 0, 1, 0};
int Y[4] = {0, 1, 0, -1};

void init(){
    for(int i = 0; i < 10; i++){
        corrPass[i] = 0;
        inputPass[i] = 0;
    }
}

void input(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> corrPass[i];
    }
    for(int i = 0; i < n; i++){
        char tmp;
        cin >> tmp;
        if(tmp == '*') inputPass[i] = -1;
        else if(tmp == '#') inputPass[i] = -2;
        else inputPass[i] = tmp - '0';
    }
}

int solve(){
    int diff = 0;
    int diff_pos = 0;
    for(int i = 0; i < n; i++){
        if(inputPass[i] != corrPass[i]){
            diff++;
            if(diff > 1) return -1;
            diff_pos = i;
        }
    }
    if(diff == 1){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 3; j++){
                if(corrPass[diff_pos] == keyboard[i][j]){
                    for(int k = 0; k < 4; k++){
                        int _i = i + X[k];
                        int _j = j + Y[k];
                        if(_i >= 0 && _i < 4 && _j >= 0 && _j < 3){
                            if(keyboard[_i][_j] == inputPass[diff_pos]) return diff_pos + 1;
                        }
                    }
                }
            }
        }
        return -1;
    }
    if(diff == 0) return 0;
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
        cout << "#" << t << " " << solve() << endl;
    }
}