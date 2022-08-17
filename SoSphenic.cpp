#include<bits/stdc++.h>
using namespace std;

int sphenic(long long  n){
	int res = 0;
	for(long long i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		while(n % i == 0){
			++cnt;
			n /= i;
		}
		if(cnt >= 2) return 0;
		if(cnt == 1) ++res;
	}
	if(n != 1) ++ res;
	return res == 3;
}
 
int main(){
	long long n;
	cin >> n;
	cout << sphenic(n); 
}
