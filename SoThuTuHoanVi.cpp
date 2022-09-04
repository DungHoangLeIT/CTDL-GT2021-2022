#include<bits/stdc++.h>
using namespace std;

int n, a[100], cnt, x[100];
bool used[100];

int check(int a[], int x[], int n){
	for(int i = 1; i <= n; i++){
		if(a[i] != x[i]) return 0;
	}
	return 1;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i < n) Try(i + 1);
			else{
				cnt++;
				if(check(a,x,n)){
					cout << cnt;
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
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> x[i];
		cnt = 0;
		used[100] = false;
		Try(1);
		cout << endl;
	}
}
