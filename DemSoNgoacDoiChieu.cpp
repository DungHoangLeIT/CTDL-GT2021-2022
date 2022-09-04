#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> x;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') x.push(s[i]);
            else{
                if(x.empty()) x.push(s[i]);
                else if(x.top() == '(') x.pop();
                else x.push(s[i]);
            }
        }
        int res = 0;
        while(!x.empty()){
            char n = x.top();
            x.pop();
            char m = x.top();
            x.pop();
            if(n == '(' && m == ')') res += 2;
            else if(n == ')' && m == '(') res += 2;
            else if(n == '(' && m == '(') res++;
            else res++;
        }
        cout << res << endl;
    }
}