#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[10000];
bool used[10000];

void init(){
    cin >> n >> m;
    for(auto& i : a){
        i.clear();
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : a[v]){
            if(!used[x]){
                q.push(x);
                used[x] = true;
            }
        }
    }
}

void ConnectedComponent(){
    int ans = 0;
    memset(used, false, sizeof(used));
    for(int i = 1; i <= n; i++){
        if(!used[i]){
            ++ans;
            bfs(i);
        }
    }
    cout << ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        init();
        ConnectedComponent();
        cout << endl;
    }
}