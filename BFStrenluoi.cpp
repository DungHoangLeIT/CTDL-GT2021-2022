#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[100001][100001];
bool used[100001][100001];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void bfs(int i, int j){
    queue<pair<int, int> > q;
    q.push({i, j});
    a[i][j] = 'O';
    while(!q.empty()){
        pair<int, int> top = q.front();
        q.pop();
        for(int k = 0; k < 4; k++){
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'X' ){
                q.push({i1, j1});
                a[i][j] = 'O';
            }
        }
    }
}

void init(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 'X'){
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main(){
    init();
}