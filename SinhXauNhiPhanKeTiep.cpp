#include<bits/stdc++.h>
using namespace std;

void Next(string s){
	int i = s.length() - 1;
	while( i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	
	if( i != -1){
		s[i] = '1';
	}
	
	cout<<s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		Next(s);
		cout << endl;
	}
}
