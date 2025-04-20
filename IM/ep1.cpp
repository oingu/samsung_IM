#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    int x;
    while(true){ 
        cin >> x;
        if(x == 42){
            break;   
        }
        cout << x << endl;
    }
    return 0;
}