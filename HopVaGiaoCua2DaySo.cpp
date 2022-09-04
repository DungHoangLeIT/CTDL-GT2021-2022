#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
	int n, m; 
	cin >> n >> m; 
	int tmp; 
	vector<int> a; 
	for(int i = 0; i < n; i++){ 
		cin >> tmp; 
		a.push_back(tmp); 
	} 
	for(int i = 0; i < m; i++){ 
		cin >> tmp; 
		a.push_back(tmp); 
	} 
	sort(a.begin(), a.end()); 
	for(int i = 0; i < a.size()-1; i++){ 
		if(a[i] == a[i+1]){ 
			cout << a[i] << " "; 
		}
	} 
	cout<<endl; 
	cout<<a[0]<<" "; 
	for(int i = 0; i < a.size()-1; i++){ 
		if(a[i] != a[i+1]){ 
			cout << a[i+1] << " "; 
		} 
	} 
	return 0; 
}
