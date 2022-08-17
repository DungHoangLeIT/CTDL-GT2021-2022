#include<bits/stdc++.h>
using namespace std;

int n, a[100];
bool used[100];

int check(int a[], int n){
	string s = "UEOAI";
	int ok1 = 1,ok2 = 1;
	for(int i = 2; i <= n - 1; i++){
		char x = char(a[i] + 'A' - 1);
		if(x == 'U' || x == 'E' || x == 'O' || x =='A' || x == 'I'){
			for(int j = 0; j <= s.length() - 1; j++){
				if(char(a[i - 1] + 'A') != s[i]) ok1 = 0;
			}
			for(int j = 0; j <= s.length() - 1; j++){
				if(char(a[i + 1] + 'A') != s[i]) ok2 = 0;
			}
			if(ok1 == 0 && ok2 == 0) return 0;
		}
	}
	return 1;
}

void in(){
	for(int i = 1; i <= n; i++) cout << char(a[i] + 'A' -1);
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n) {
				if(check(a, n)) in();
			}
			else Try(i + 1);
			used[j] = false;
		}
	}
}

int main(){
	char c;
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}










