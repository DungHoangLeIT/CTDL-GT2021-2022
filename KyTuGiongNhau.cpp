#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, insert, remove, copy;
		cin >> n >> insert >> remove >> copy;
		int d[n + 5] = {0};
		
		d[0] = 0;
		d[1]= insert;
		for(int i = 2; i <= n; i++){
			if(i & 1) d[i] = min(d[i - 1] + insert, d[(i + 1) / 2] + copy + remove);
			else d[i] = min(d[i - 1] + insert, d[i / 2] + copy );
		}
		cout << d[n] << endl;
	}
}
