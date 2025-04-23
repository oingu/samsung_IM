#include <iostream>
using namespace std;

bool sodep[100];
int m; 

bool check(int n){
    int cnt = 0;
    while (n>0){
        int du = n%10;
        if(sodep[du] == 1) cnt++; 
        n/= 10;
    }
    return cnt >= m;
}

int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for(int k = 1; k <=t; k++){
        for(int i = 0; i < 10; i++) sodep[i] = 0;
        int n;
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            sodep[x] = 1;
        }
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        for(int i = x; i <= y; i++){
            if(check(i)) cnt++;
        }

        cout << "#" << k << " " << cnt << endl;;
        
    }
}