#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<string> x;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                x.push(str);
                str = "";
            }
            else if(i == s.size() - 1){
                str += s[i];
                x.push(str);
                str = "";
            }
            else{
                str += s[i];
            }
        }
        while(!x.empty()){
            cout << x.top() << " ";
            x.pop();
        }
        cout << endl;
    }
}