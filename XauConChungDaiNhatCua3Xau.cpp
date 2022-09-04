#include<bits/stdc++.h>
using namespace std;

int d[101][101][101];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, l;
		string s1,s2,s3;
		cin >> n >> m >> l >> s1 >> s2 >> s3;
		memset(d, 0, sizeof(d));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				for(int k = 1; k <= l; k++){
					if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]){
						d[i][j][k] = 1 + d[i - 1][j - 1][k - 1];
					}
					else d[i][j][k] = max(d[i - 1][j][k], max(d[i][j - 1][k], d[i][j][k - 1]));
				}
			}
		}
		cout << d[n][m][l] << endl;
	}
}
