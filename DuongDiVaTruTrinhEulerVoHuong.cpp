#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n + 5] = {};
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y]++;
    }
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 1) dem++;
    }
    if(dem > 2) cout << 0 << endl;
    else if(dem == 0) cout << 2 << endl;
    else cout << 1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}