#include<bits/stdc++.h>
using namespace std;

int n, m, cnt;
vector<int> a[100005];
bool used[100005];

void init(){
    memset(used, false, sizeof(used));
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
        cnt++;
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
    for(int i = 1; i <= n; i++){
        if(!used[i]){
            cnt = 0;
            bfs(i);
            ans = max(ans, cnt);
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