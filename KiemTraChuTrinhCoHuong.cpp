#include<bits/stdc++.h>
using namespace std;

const int Max = 1000001;

int n, m;
vector<int> a[Max];
int color[Max];

void init(){
    cin >> n >> m;
    for(auto&i : a){
        i.clear();
    }
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(color, 0, sizeof(color));
}
    
bool dfs(int u){
    color[u] = 1;
    for(int v : a[u]){
        if(color[u] == 0){ 
            if(dfs(v)) return true;
        }
        else if(color[v] == 1) return true;
    }
    color[u] = 2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        init();
        int ok = 0;
        for(int i = 1; i <= n; i++){
            if(color[i] == 0){
                if(dfs(i)){
                    ok = 1;
                    break;
                }
            }
        }
        if(ok == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}