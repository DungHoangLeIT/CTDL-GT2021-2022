#include<bits/stdc++.h>
using namespace std;

int solve(int l, int r ,int a[], int x){
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return 1;
		else if(a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return 0;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	long long res = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(int i = 0 ; i < n; i++){
		if(solve(i + 1, n - 1, a, a[i] - k)){
			res = 1;
		}
	}
	cout << res;
}
