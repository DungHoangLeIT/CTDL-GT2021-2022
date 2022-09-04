#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x, int y){
	int l = 0;
	int r = n - 1;
	int res = -1;
	while(l <= r){
		int m = l + (r - l) / 2;
		if(a[m] == x) return a[m];
		else if(a[m] < x){ 
			l = m + 1;
		}
		else r = m - 1;
	}
	return 0;
}

int main(){
	long long tich;
	int a,b,c;
	cin >> a >> b >> c;
	tich = a * b * c;
	long long f[10000];
	for(int i = 0; i < 100; i++) f[i] = 1;
	f[0] = a;
	f[1] = b;
	f[2] = c;
	for(int i = 3; i < 97; i++){
		f[i] = f[i - 1] * f[i - 2] * f[i - 3];
		cout << f[i] << " ";
	}
	for(int i = 0; i < 97; i++){
		tich *= f[i];
	}
	tich /= 97;
	cout << tich;
	for(int i = 1; i <= 97; i++){
		while(1){
			if(tich += i == f[i]){
				cout << f[i];
				i++;
				break;
			}
		}
		while(1){
			if(tich -= i == f[i]){
				cout << f[i];
				i++;
				break;
			}
		}
	}
}