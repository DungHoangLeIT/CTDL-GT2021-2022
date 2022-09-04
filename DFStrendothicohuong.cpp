#include<bits/stdc++.h>
using namespace std;

vector<int> a[100000];
bool used[100000];
int n, m, k;

void init(){
    cin >> n >> m >> k;
    for(auto& i : a){
        i.clear();
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    memset(used, false, sizeof(used));
}

void DFS(int u){
    cout << u << " ";\
    used[u] = true;
    for(auto v : a[u]){
        if(!used[v]){
            DFS(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        init();
        DFS(k);
        cout << endl;
    }
}