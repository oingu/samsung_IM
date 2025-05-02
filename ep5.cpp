#include <iostream>
#include <string>
using namespace std;

string s1, s2;

int compareStr(string s1, string s2){
    for(int i = 0 ; i < s1.size(); i++){
        if(s1[i] != s2[i]) return 0;
    }
    return 1;
}

int main(){
    //freopen("input.txt", "r", stdin);
    for(int t = 1; t <= 10; t++){
        int cnt = 0;
        char tc; 
        cin >> tc;
        //if(tc - '0' < 0 || tc - '0' > 10) break;
        cin >> s1;
        cin.ignore();
        getline(cin, s2);
        for(int i = 0; i < s2.size(); i++){
            if(compareStr(s1, s2.substr(i, s1.size()))) cnt++;
        }
        cout << '#' << tc << ' ' << cnt << endl;
    }
}

