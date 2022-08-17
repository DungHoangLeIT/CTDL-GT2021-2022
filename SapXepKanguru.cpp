#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 0; i  < n; i++) cin >> a[i];
		sort(a , a + n , cmp);
		int l = 0;
		int r = n / 2;
		int dem = 0;
		while(l < n / 2 && r < n){
			if(a[l] >= 2 * a[r]){
				dem++;
				l++;
				r++;
			}
			else{
				r++;
			}
		}
		cout << n - dem << endl;
	}
}
