#include <bits/stdc++.h>
using namespace std;

vector<string> x;

void solve(){
    queue<string> q;
    q.push("6");
    q.push("8");
    x.push_back("6");
    x.push_back("8");
    while(1){
        string top = q.front();
        q.pop();
        if(top.length() == 15) break;
        x.push_back(top + "6");
        x.push_back(top + "8");
        q.push(top + "6");
        q.push(top + "8");
    }
}

int main(){
    solve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> tmp;
        for(string i : x){
            if(i.length() == n + 1) break;
            tmp.push_back(i);
        }
        reverse(tmp.begin(), tmp.end());
        for(string i : tmp) cout << i << " ";
        cout << endl;
    }
}