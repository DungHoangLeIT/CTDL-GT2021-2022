#include<bits/stdc++.h>
using namespace std;

int n, a[1000];
bool used[100];

int check(int a[], int n){
	set<int> x;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) return 0;
	}
	for(int i = 1; i <= n; i++){
		x.insert(a[i]);
	}
	if(x.size() != n) return 0;
	for(int i = 1; i <= n - 1; i++){
		if(abs(a[i] - a[i + 1]) == 1) return 0;
	}
	return 1;
}

void ktao(){
	cin >> n;
	used[100] = false;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				if(check(a,n)){
					for(int i = 1; i <= n; i++){
						cout << a[i];
					}
					cout << endl;
				}
			}
			Try(i + 1);
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
		cout << endl;
	}
}
