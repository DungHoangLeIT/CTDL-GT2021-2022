#include<bits/stdc++.h>
using namespace std;

int a[100][100], n, ok, cnt;
char c[100];
string res;

void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
    ok = 0;
    cnt = 0;
    res = "";
}

void Try(int i, int j, int k){
	if(i == n && j == n){
        cnt++;
		for(int i = 1; i < k; i++){
			res += c[i];
		}
        res += " ";
		ok = 1;
		return;
	}
	if(i + 1 <= n && a[i + 1][j] == 1){
		c[k] = 'D';
		a[i + 1][j] = 0;
		Try(i + 1, j , k + 1);
		a[i + 1][j] = 1;
	}
	if(j-1>=1 && a[i][j-1]){
		c[k]='L';
		a[i][j-1]=0;
		Try(i,j-1,k+1);
		a[i][j-1]=1;
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		c[k] = 'R';
		a[i][j + 1] = 0;
		Try(i, j + 1, k + 1);
		a[i][j + 1] = 1;
	}
	if(i-1>=1 && a[i-1][j]){
		c[k]='U';
		a[i-1][j]=0;
		Try(i-1,j,k+1);
		a[i-1][j]=1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		if(a[1][1] && a[n][n]){
			a[1][1] = 0;
			Try(1, 1, 1);
            cout << cnt << " ";
            cout << res;
		}
		if(ok) cout << endl;
		else cout << -1 << endl;
	}
}





