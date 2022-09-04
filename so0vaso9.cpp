#include <bits/stdc++.h>
using namespace std;

vector<long long> x;
long long a[1000];

void solve(){
    queue<string> q;
    q.push("9");
    x.push_back(9);
    while(1){
        string top = q.front();
        q.pop();
        if(top.length() == 12) break;
        x.push_back(stoll(top + "0"));
        x.push_back(stoll(top + "9"));
        q.push(top + "0");
        q.push(top + "9");
    }
}

int main(){
    solve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}