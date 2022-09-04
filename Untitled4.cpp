#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int sum0 = 0;
	int sum1 = 0;
	int Max0 = 0;
	int Max1 = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) Max0++;
		else if(a[i + 1] != 0){
			sum0 = max(sum0, Max0);
			Max0 = 0;
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) Max1++;
		else if(a[i + 1] != 1){
			sum1 = max(sum1, Max1);
			Max1 = 0;
		}
	}
	cout << sum1 << " " << sum0;
}
