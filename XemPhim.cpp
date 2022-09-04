#include<bits/stdc++.h>
using namespace std;

int d[101][25001];

int main(){
	int w ,n;
	cin >> w >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	memset(d,0,sizeof(d));
	for(int i =1; i <= n; i++){
		for(int j = 1; j <= w; j++){
			if(j >= a[i]) d[i][j] = max(d[i - 1][j], d[i - 1][j - a[i]] + a[i]);
			else d[i][j] = d[i - 1][j];
		}
	}
	cout << d[n][w];
}
