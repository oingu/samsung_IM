#include <iostream>
#include <string>
using namespace std;

string s;

int checkSym(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}


int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc; cin >> tc;
    for(int t = 1; t <= tc; t++){
        cin >> s;
        //cout << s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = 1; j <= s.size() - i; j++){
                cout << s.substr(i, j) << endl;
                if(checkSym(s.substr(i, j))){
                    cnt++;
                    //cout << cnt;
                } 
            }
        }
        cout << "#" << t << " " << cnt << endl;

    }

}