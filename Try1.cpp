#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 5][n + 5];
    int c[n + 5][n +5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            c[i][j] = a[i][j];
        }
    }


    for(int i = 1; i <= n; i++){
        int ok = 1;
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1) ok = 0;
        }
        if(ok == 0){
            for(int j = 1; j <= n; j++) c[i][j] = 1;
        }
    }

    for(int j = 1; j <= n; j++){
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(a[i][j] == 1) ok = 0;
        }
        if(ok == 0){
            for(int i = 1; i <= n; i++) c[i][j] = 1;
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }
}
