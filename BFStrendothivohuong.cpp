#include<bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> a[10000];
bool used[10000];

void ktao(){
    cin >> n >> m >> k;
    for(auto&i : a){
        i.clear();
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x  >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(used, false, sizeof(used));
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : a[v]){
            if(!used[x]){
                q.push(x);
                used[x] = true;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ktao();
        bfs(k);
        cout << endl;
    }
}