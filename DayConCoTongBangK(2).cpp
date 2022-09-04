#include<bits/stdc++.h>
using namespace std;

int main(){
	map<long long, int> mp;
	long long ans = 0;
	long long sum = 0;
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		sum += x;
		if(sum == k) ans++;
		if(mp.find(sum - k) != mp.end() ){
			ans += mp[sum - k];
		}
		mp[sum]++;
	}
	cout << ans;
}
