#include<bits/stdc++.h>
using namespace std;

int n, a[100];
bool used[100];

int check(int a[], int n){
	for(int i = 1; i < n; i++){
		if(a[i + 1] - a[i] == 1 || a[i + 1] - a[i] == -1) return 0;
	}
	return 1;
}

void ktao(){
	cin >> n;
	used[100] = false;
}

void Xuat(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				if(check(a, n)) Xuat();
			}
			else Try(i + 1);
			used[j] = false;
		}
	}
}


main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1);
	}	
}
