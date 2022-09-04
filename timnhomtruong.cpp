#include<bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
vector<int> a[1000005];
bool used[100005];
int tplt[100005];
int dem[10000] = {0};

void ktao(){
    cin >> n >> m;
    while( m-- ) {
        int u,v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) {
        for(auto k:a[i]) dem[i]++;
    }
}

void dfs(int u){
	used[u] = true;
	tplt[u] = cnt;
	for(int v : a[u]){
		if(!used[v]){
			dfs(v);
		}
	}
}

int main(){
	ktao();
	for(int i = 1; i <= n; i++){
		if(!used[i]){
			cnt++;
			dfs(i);
		}
	}
	set<int> x;
	int res[100];
	for(int i = 1; i <= cnt; i++){
		int Min = -1e9;
		int res;
		for(int j = n; j >= 1; j--){
			if(tplt[j] == i){
				if(dem[j] >= Min){
					Min = dem[j];
					res = j;
				}
			}
		}
		x.insert(res);
	}
	for(int i : x) cout << i << ' ';
}