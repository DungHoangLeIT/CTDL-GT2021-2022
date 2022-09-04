#include<bits/stdc++.h>
using namespace std;

int main(){
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5];
		int f[n + 5][m + 5];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(i == 1 && j == 1) f[i][j] = a[i][j];
				else if(i == 1) f[i][j] = f[i][j - 1] * a[i][j];
				else if(j == 1) f[i][j] = a[i][j] * f[i - 1][j];
				else f[i][j] = a[i][j] * max(f[i - 1][j - 1], max(f[i - 1][j], f[i][j - 1]));
			}
		}
		int x, y;
		cin >> x >> y;
		cout << f[x][y] << endl;
}
