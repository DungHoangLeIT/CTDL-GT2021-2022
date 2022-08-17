#include<bits/stdc++.h>
using namespace std;

long long const Mod = 123456789;
long long Mul(long long n){
	if(n == 0) return 1;
	if(n == 1) return 2;
	long long p = Mul(n / 2);
	if(n % 2 == 0) return (p % Mod * p % Mod) % Mod;
	return 2 * (p % Mod * p % Mod) % Mod;
}

main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		n-=1;
		cout << Mul(n);
		cout << endl;
	}
}
