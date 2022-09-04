#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[10001][10001];
bool used[10001][10001];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j){
    used[i][j] = true;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k]; 
        if(i1 >= 1 && i1 <= n && j1  >= 1 && j1 <= m && a[i1][j1] == '#' && !used[i1][j1] ){
            dfs(i1, j1);
        }
    }
}

void init(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    memset(used, false, sizeof(used));
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '#' && !used[i][j]){
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main(){
    init();
}