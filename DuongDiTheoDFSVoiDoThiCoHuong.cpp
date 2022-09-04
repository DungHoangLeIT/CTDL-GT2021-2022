#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> a[10005];
bool used[10005];
int parents[10005];

void dfs(int u){
    used[u] = true;
    for(int x : a[u]){
        if(!used[x]){
            parents[x] = u;
            dfs(x);
        }
    }
}

void Path(int s, int t){
    memset(used, false, sizeof(used));
    memset(parents, 0, sizeof(parents));
    dfs(s);
    if(!used[t]){
        cout << - 1;
    }
    else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parents[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
}

int main(){
    int d;
    cin >> d;
    while(d--){
        cin >> n >> m >> s >> t;
        for(auto&i : a){
            i.clear();
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y); 
            a[y].push_back(x);
        }
        Path(s,t);
        cout << endl;
    }
}