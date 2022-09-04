#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string s = "";
        for(char i : str){
            if(i == '(' || i == ')') s += i;
        }
        stack<int> x;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') x.push(i);
            else{
                if(x.empty()) x.push(i);
                else{
                    int n = x.top();
                    x.pop();
                    if(s[n] == '('){
                        if(x.empty()) ans = i + 1;
                        else ans = max(ans, i - x.top());
                    }
                    else x.push(i);
                }
            }
        }
        cout << ans << endl;
    }
}