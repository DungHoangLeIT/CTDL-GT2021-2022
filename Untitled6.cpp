#include<bits/stdc++.h>
using namespace std;

int n, a[100], final;

void ktao(){
	for(int i=1; i<=n ; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) final = 0;
	else a[i]=1;
}

int ktra(int a[], int n){
	if(a[1] != 1 || a[n] != 0) return 0;
	for(int i = 1; i <= n - 3; i++){
		if(a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0) return 0;
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == 1 && a[i + 1] == 1) return 0;
	}
	return 1;
}

int main(){
	cin>>n;
	final = 1;
	while(final){
		if(ktra(a, n)){
			for(int i=1; i<=n ; i++){
				if(a[i] == 1) cout << 8;
				else cout << 6;
			}
			cout<<endl;
		}
		sinh();
	}
}
