#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		int res;
		bool ktra = false;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(a[i] > 0) ktra = true;
			if(i == 1) res = a[1];
			else{
				if(res < a[i]) res = a[i];
			} 
		}
		if(!ktra){
			cout << res << endl;
		}
		else{
			int sum = 0;
			res = a[1];
			for(int i = 1; i <= n; i++){
				if(sum + a[i] < 0){
					sum = 0;
					continue;
				}
				sum += a[i];
				if(res < sum) res = sum;
			}
		}
		cout << res << endl;
	}
}





