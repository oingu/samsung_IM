#include <iostream>
using namespace std;
int numSum(int x){
    int res = 0;
    while(x > 0){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int ans;
        cin >> ans;
        while(ans > 9){
            ans = numSum(ans);
        }
        cout << '#' << i << ' ' << ans << endl; 
    }
    return 0;

}