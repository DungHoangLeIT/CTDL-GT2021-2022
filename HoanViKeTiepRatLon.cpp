#include<bits/stdc++.h>
using namespace std;

void next(string s){
	int i = s.length() - 2;
	while(i >= 0 && s[i] >= s[i+1]){
		--i;
	}
	if(i == -1) cout << "BIGGEST";
	else{
		int j = s.length() - 1;
		while(s[i] >= s[j]){
			j--;
		}
		swap(s[i], s[j]);
		int l = i + 1;
		int r = s.length() - 1;
		while(l < r){
			swap(s[l], s[r]);
			l++;
			r--;
		}
		cout << s;
	}
}

int main(){
	int t;
	int k = t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << n << " "; 
		next(s);
		cout << endl;
	}
}
