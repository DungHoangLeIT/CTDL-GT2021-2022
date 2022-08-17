#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x){
	int l = 0;
	int r = n - 1;
	while(l <= r){
		int m = l + (r - l) / 2;
		if(a[m] == x) return 1;
		else if(a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return 0;
}

int main(){
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(BinarySearch(a,n,x) == 0) cout << "NO" << endl;
		else cout << "YES"  << endl;
}
