#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n - 1; i++){
		int Min = i;
		for(int j = i + 1; j <= n; j++){
			if(a[Min] > a[j]){
				Min = j;
			}
		}
		swap(a[i], a[Min]);
		cout << "Buoc " << i << ": ";
		for(int k = 1; k <= n; k++) cout << a[k] << " ";
		cout << endl;
	}
}
