#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long Mul(long long a, long long b){
	if(b == 0) return 0;
	long long tmp = Mul(a, b/2);
	if(b & 1) return (tmp * 2 + a) % mod;
	return tmp * 2 % mod;
}

long long Pow(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	long long tmp = Pow(n, k / 2);
	long long a = Mul(tmp, tmp);
	if(k & 1) return a * n % mod;
	return a % mod;
}

int main(){
	int t = 20;
	while(t--){
		int a;
		long long b;
		cin >> a >> b;
		if(a == 0 && b == 0) return 0;
		else cout << Pow(a, b);
		cout << endl;
	}
}
