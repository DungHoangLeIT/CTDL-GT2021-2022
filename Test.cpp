#include<bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	int dong = m, cot = n, k = 1, p = 0, i, j;
	while(k <= m*n){
		for(i = p; i < cot; i++) 
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) 
			a[i][cot-1] = k++;
		for(i = cot-2; i >=p; i--) 
			a[dong-1][i] = k++;
		for(i = dong-2; i > p; i--) 
			a[i][p] = k++;
		p++;dong --; cot --;
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}