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

int main(){
	int t;
	cin >> t;
	while(t--){
		cin>>n;
		final = 1;
		vector<int> v;
		int cnt = 0;
		while(final){
			cnt++;
			for(int i=1; i<=n ; i++){
				v.push_back(a[i]);
			}
			sinh();
		}
		cout << cnt << endl;
		for(int i = 0; i < v.size(); i++){
			if(v[i] == 0) cout << 6;
			if(v[i] == 1) cout << 8;
			if((i + 1) % n == 0) cout << ' ';
		}
		cout << endl;
	}
}
