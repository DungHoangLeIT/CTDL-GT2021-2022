#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[100001];
bool used[100001];

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
    memset(used, false, sizeof(used));
}

bool DFS(int u, int par){
    used[u] = true;
    for(int x : a[u]){
        if(!used[x]){
            if(DFS(x, u)) return true; 
        }
        else if(x != par){
            return true;
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
                if(DFS(i,i)){
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