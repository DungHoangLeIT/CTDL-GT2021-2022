#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[10000001];
bool used[10000001];
int par[10000001];

void init(){
    cin >> n >> m;
    for(auto&i : a){
        i.clear();
    }
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        //a[y].push_back(x);
    }
    memset(used, false, sizeof(used));
}

bool BFS(int u){
    used[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : a[v]){
            if(!used[x]) {
                q.push(x);
                used[x] = true;
                par[x] = v;
            }
            else if(x != par[v]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        init();
        int ok = 0;
        for(int i = 1; i <= m; i++){
            if(!used[i]){
                if(BFS(i)) {
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}