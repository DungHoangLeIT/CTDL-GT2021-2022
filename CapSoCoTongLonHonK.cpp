#include<bits/stdc++.h>
using namespace std;

int first_post(int a[],int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] > x){
			res = m;
			r = m - 1;
		}
		else l = m + 1;
	}
	return res;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	long long res = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a , a + n);
	for(int i = 0; i < n - 1; i++){
		int r = first_post(a, i + 1, n - 1, k - a[i]);
		if(r != -1) res += n - r;
	}
	cout << res;
}
