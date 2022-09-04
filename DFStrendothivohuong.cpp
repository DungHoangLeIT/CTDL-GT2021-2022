#include<bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> a[10005];
bool used[10005];

void inp(){
    cin >> n >> m >> k;
	for(auto&i : a){
		i.clear();
	}
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(used, false, sizeof(used));
}

void DFS(int u){
    cout << u << " ";
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
        inp();
        DFS(k);
        cout << endl;
    }
}