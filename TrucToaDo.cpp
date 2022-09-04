#include<bits/stdc++.h>
using namespace std;
struct data{
	int start, finish;
} a[10005];

bool cmp(data x, data y){
	return x.finish < y.finish;
}
int main(){
	int n,i,j,d;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i].start;
			cin >> a[i].finish;
		}
		sort(a , a + n , cmp);
		i = 0;d = 1;
		for(j = 1;  j < n; j++){
			if(a[j].start >= a[i].finish){
				i = j;
				d++;
			}
		}
		cout << d << endl;
	}
}
