#include<bits/stdc++.h>
using namespace std;

int n, a[10005];
string s;
bool used[100];

void ktao(){
	cin >> s;
	n = s.length();
	used[100] = false;
}

void Try(int i){
	for(int j = 0; j < n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n - 1){
				for(int i = 0; i < n; i++){
					cout << s[a[i]];
				}
				cout << " ";
			}
			else Try(i + 1);
			used[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(0);
		cout << endl;
	}
}

// 1 2 
