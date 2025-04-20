#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, x, y;
        cin >> n >> x >> y;
        for(int j = x; j < n ; j += x){
            if (j%y)
            {
                cout << j << ' ';
            }
        }
        cout << endl;

    }
    return 0;
}