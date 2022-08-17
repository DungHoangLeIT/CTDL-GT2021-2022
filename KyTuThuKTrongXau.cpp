#include<bits/stdc++.h> 
using namespace std; 

int main (){ 
	int t; 
	cin>>t; 
	while(t--){ 	
		long long n, k;
		cin >> n >> k;
		long long len = pow(2, n - 1);
		while(1){
			if(n == 1) {
				cout << char('A' + 1);
				break;
			}
			if(len == k){
				cout << char('A' + (n - 1));
				break;
			}
			else{
				k = len - (k - len);
			}
			n--;
			len/= 2;
		}
		cout<<endl; 
	} 
}
