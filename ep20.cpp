#include <iostream>
using namespace std;

int a[100001];
int n;
bool visited[100000001];

void init(){
    for(int i = 1; i <= n; i++){ 
        visited[a[i]] = 0;
        a[i] = 0;
    }
}

void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

int solve(){
    int indx = 0;
    for(int i = 1; i <= n; i++){
        if(visited[a[i]]) {
            indx = i;
            break;
        }
        visited[a[i]] = true;
    }
    for(int i = 1; i <= indx; i++) {
        visited[a[i]] = 0;
    }
    if(indx != 0) return a[indx];
    return -1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++){
        input();
        cout << "#" << i << " " << solve() << endl;
        init();
    }
    
    return 0;
}