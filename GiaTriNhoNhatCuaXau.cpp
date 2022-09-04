#include<bits/stdc++.h>
using namespace std;
int dem[100000] = {0};
int main(){
	int t;
	t = 1;
	while(t--){
		long long n;
		cin >> n;
		string s;
		cin >> s;
		for(long long i = 0; i < s.size(); i++){
			dem[s[i]]++;
		}
		priority_queue<long long, vector<long long>> q;
		for(long long i = 0; i < s.size(); i++){
			if(dem[s[i]] > 0){
				q.push(dem[s[i]]);
				dem[s[i]] = 0;
			}
		}
		while(n > 0 && q.size() > 0){
			n -= 1;
			long long t = q.top();
			q.pop();
			t--;
			q.push(t);
		}
		long long res = 0;
		while(q.size() > 0){
			long long t = q.top();
			q.pop();
			res += t * t;
		}
		cout << res << endl;
	}
}





