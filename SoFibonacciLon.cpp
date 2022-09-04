#include<bits/stdc++.h>
using namespace std;

const long long Mod = 1e9 + 7;

struct Matran{
	long long f[2][2];
};

Matran operator* (Matran A, Matran B){
	Matran C;
	for(long long i = 0; i < 2; i++){
		for(long long j = 0; j < 2; j++){
			C.f[i][j] = 0;
			for(long long k = 0 ; k < 2; k++){
				C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % Mod) % Mod;
			}
		}
	}
	return C;
}

Matran powMod(Matran A, long long n){
	if(n == 1) return A;
	Matran X = powMod(A, n / 2);
	if(n % 2 == 0) return X * X;
	else return A * X * X;
}

int main(){
	long long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		Matran A;
		A.f[0][0] = 1; A.f[0][1] = 1; A.f[1][0] = 1; A.f[1][1] = 0;
		Matran KQ = powMod(A, n);
		cout << KQ.f[0][1] << endl;
	}
}
