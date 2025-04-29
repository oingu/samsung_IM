#include <iostream>
using namespace std;

int n;
vector<int> a[10001], b[10001];
vector<int> v;

void input(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a[i].push_back(tmp);
    }
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        b[i].push_back(tmp);    }
}

int findMax(int i){
    for(int j = i; j < )
}

int main(){
    freopen("input.txt", "r", stdin);
    int tc;
    cin >> tc;
    while(tc--){
        input();
        for(int i = 0; i < n; i++){
            //cout << a[i] << ' ' << b[i] << endl;

        }
    }
}