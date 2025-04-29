#include <iostream>
using namespace std;

const int maxIndex = 9;
char A[maxIndex][maxIndex];

void readData(){
    for(int r=0; r < maxIndex; r++){
        for(int c=0; c < maxIndex; c++){
            cin >> A[r][c];
        }
    }
}

int check(int index, bool isRow){
    int count[10] = {0};
    for(int i=0; i < maxIndex; i++){
        char value = isRow ? A[index][i] : A[i][index];
        if (value != '.'){
            int _value = int(value - '0');
            if (count[_value] > 0){
                return 0;
            }
            else{
                count[_value] += 1;
            }
        }
    }
    return 1;
}

int checkSubmatrix(int r, int c){
    int count[10] = {0};
    for(int i=r; i < r + 3; i++)
    {
        for(int j=c; j < c + 3; j++){
            char value = A[i][j];
            if (value != '.'){
                int _value = int(value - '0');
                if (count[_value] > 0){
                    return 0;
                }
                else{
                    count[_value] += 1;
                }
            }
        }
    }
    return 1;
}

int solve(){
    for(int i = 0; i < maxIndex; i++){
        if (!check(i, true) || !check(i, false)) return 0;
    }
    for(int i = 0; i <= maxIndex - 3; i+=3){
        for(int j = 0; j <= maxIndex - 3; j+=3){
            if (!checkSubmatrix(i,j)) return 0;
        }
    } 
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int testCase;
    cin >> testCase;
    for(int tc=1; tc <= testCase; tc++){
        readData();
        cout << "#" << tc << " " << solve() << "\n";
    }
    return 0;
}