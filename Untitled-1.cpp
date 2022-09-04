#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int dem0 = 1;
	int dem1 = 1;
	int max0 = 0;
	int max1 = 0;
	for(int i = 1; i < n; i++){
		if(a[i] == 1 && a[i + 1] == 1) dem1++;
		max1 = max(max1, dem1);
		if(a[i + 1] != 1){
			dem1 = 1;
		}
	} 
	for(int i = 1; i < n; i++){
		if(a[i] == 0 && a[i + 1] == 0) dem0++;
		max0 = max(max0, dem0);
		if(a[i + 1] != 0){
			dem0 = 1;
		}
	} 
	cout << max1 << " " << max0;
}
