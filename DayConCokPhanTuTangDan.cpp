#include<bits/stdc++.h>
using namespace std;

int n, k ,a[100], x[100];
bool used[100];

int check(int a[], int n){
	for(int i = 1; i <= n - 1; i++){
		if(a[i] > a[i + 1]) return 0;
	}
	return 1;
}

void ktao(){
	cin >> n >> k; 
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	used[100] = false;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			used[j] = true;
			x[i] = j;
			if(i < k) Try(i + 1);
			else {
				if(check(x, k)){
					for(int i = 1; i <= k; i++){
						cout << a[x[i]] << ' ';
					}
					cout << endl;
				}	
			}
			used[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1);
	}
}
