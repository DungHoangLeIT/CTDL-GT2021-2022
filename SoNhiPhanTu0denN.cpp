#include <bits/stdc++.h>
using namespace std;

vector<string> x;

void solve(){
    queue<string> q;
    q.push("1");
    while(x.size() <= 1e5){
        string top = q.front();
        q.pop();
        x.push_back(top);
        q.push(top + "0");
        q.push(top + "1");
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
}