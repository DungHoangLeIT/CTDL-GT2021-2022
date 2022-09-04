#include<bits/stdc++.h>
using namespace std;

int x[100], k , n , stop;
vector<vector<int> > v;
void Init(){
	stop = false;
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void Xuat(){
	vector<int> ans;
	for(int i = 1; i <= k; i++){
		ans.push_back(x[i]);
	}
	v.push_back(ans);
}

void Sinh(){
	int i  = k;
	while(i >= 1 && x[i] == n - k + i){
		i--;
	}
	if(i == 0){
		stop = true;
	}
	else{
		x[i]++;
		int p = x[i];
		while(i <= k){
			x[i++] = p++;
		}
	}
}

void CT(){
	while(!stop){
		Xuat();
		Sinh();
	}
}

void solve(){
	cin >> n >> k;
	Init();
	CT();
	for(int i = v.size() - 1; i >= 0; i--){
		for(auto j : v[i]) cout << j << " ";
		cout << endl;
	}
	for(auto& i : v) i.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
