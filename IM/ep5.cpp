#include <iostream>
#include <cmath>
using namespace std;


int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if((n % i) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        for(int i = x; i <= y; i++){
            if(isPrime(i)){
                cout << i << endl;
            }     
        }
        cout << endl;    
    }
    return 0;
}