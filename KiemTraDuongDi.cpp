#include<bits/stdc++.h>
using namespace std;

vector<int> a[100005];
bool used[100005];
int parents[100005];

void dfs(int u){
    used[u] = true;
    for(int v : a[u]){
        if(!used[v]){
            parents[v] = u;
            dfs(v);
        }
    }
}

void Path(int s, int t){
    memset(used, false, sizeof(used));
    memset(parents, 0, sizeof(parents));
    dfs(s);
    if(!used[t]){
        cout << "NO";
    }
    else cout << "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(auto&i : a){
            i.clear();
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int q;
        cin >> q;
        for(int i = 1; i <= q; i++){
            int s, t;
            cin >> s >> t;
            Path(s, t);
            cout << endl;
        }
    }
}