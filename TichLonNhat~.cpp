#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> v;
	int a;
	for(int i = 1; i <= n; i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int max1 = -1e9 - 1, max2 = -1e9 - 1, min1 = 1e9 + 1, min2 = 1e9 + 1;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > max1){
			max2 = max1;
			max1 = v[i];
		}
		else if(v[i] > max2){
			max2 = v[i];
		}
		if(v[i] < min1){
			min2 = min1;
			min1 = v[i];
		}
		else if(v[i] < min2){
			min2 = v[i];
		}
	}
	long long res = max(max1 * max2, min1 * min2);
	cout << res << endl;
}

int main(){
	solve();
}
