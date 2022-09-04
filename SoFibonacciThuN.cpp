#include<bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;

long long n, f[2][2], m[2][2];

void Mul(long long f[2][2], long long m[2][2]){
	long long x = (f[0][0] * m[0][0] % Mod + f[0][1] * m[1][0] % Mod) % Mod;
	long long y = (f[0][0] * m[0][1] % Mod + f[0][1] * m[1][1] % Mod) % Mod;
	long long z = (f[1][0] * m[0][0] % Mod + f[1][1] * m[1][0] % Mod) % Mod;
	long long t = (f[1][0] * m[0][1] % Mod + f[1][1] * m[1][1] % Mod) % Mod;
	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = z;
	f[1][1] = t;
}

void Pow(long long f[2][2], long long n){
	if(n <= 1) return;
	Pow(f, n / 2);
	Mul(f, f);
	if(n % 2 == 1) Mul(f, m); 
}

void solve(){
	f[0][0] = f[1][0] = f[0][1] = 1;
	f[1][1] = 0;
	m[0][0] = m[1][0] = m[0][1] = 1;
	m[1][1] = 0;
	cin >> n;
	if(n == 0) cout << 0;
	else{
		Pow(f, n - 1);
		cout << f[0][0];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


















