#include <bits/stdc++.h>
using namespace std;
 
int n, m;
 
int main(){
	cin >> n;
	cin.ignore();
	int a[n + 5][n + 5] = {};
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		s += ' ';
		int so = 0;
		for(auto j : s){
			if( j >= '0' && j <='9' ) so = so*10 + (int)(j-'0');
			else if(so > 0){
				a[i][so] = a[so][i] = 1;
				so = 0;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " " ;
		}
		cout << endl;
	}
	return 0;
}
 
