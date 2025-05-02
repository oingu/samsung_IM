#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int checkMachula(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'm') return 0;
    }
    return 1;
}

int stringToInt(string s){
    int res = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        res += (s[i] - '0')*pow(10, s.size() -1 - i); 
    }
    return res;
}

int main(){
    
    int tc; cin >> tc;
    while(tc--){
        int a[3];
        for(int i = 0; i < 3; i++){
            string tmp;
            cin >> tmp;
            cout << tmp << endl;
            if(tmp != "+" || tmp != "=" || checkMachula(tmp)) a[i] = stringToInt(tmp); 
            else a[i] = -1;
        }
        if(a[0] == -1) cout << a[2] - a[1] << ' ' << '+' << ' ' << a[1] << ' ' << '=' << ' ' << a[2] << endl;
        if(a[1] == -1) cout << a[0] << ' ' << '+' << ' ' << a[2] - a[0] << ' ' << '=' << ' ' << a[2] << endl;
        if(a[2] == -1) cout << a[0] << ' ' << '+' << ' ' << a[1] << ' ' << '=' << ' ' << a[0] + a[1] << endl;
    }
}