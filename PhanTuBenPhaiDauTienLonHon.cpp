#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5];
        deque<int> x;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++){
            int k = 0;
            for(int j = i; j <= n; j++){
                if(a[i] < a[j]){
                    x.push_back(a[j]);
                    k = 1;
                    break;
                }
            }
            if(k == 0) x.push_back(-1);
        }
        while(n--){
            cout << x.front();
            cout << " ";
            x.pop_front();
        }
        cout << endl;
    }
}