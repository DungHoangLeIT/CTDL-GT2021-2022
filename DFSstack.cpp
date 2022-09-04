#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int n;
int a[MAX][MAX];
bool used[MAX];

void DFS(int u){
	stack<int> x;
	x.push(u);
	cout << u << " ";
	used[u] = false;
	while(!x.empty()){
		int u = x.top();
		x.pop();
		for(int i = 1; i <= n; i++){
			if(a[u][i] && used[i] == true){
				x.push(u);
				x.push(i);
				cout << i << " ";
				used[i] = false;
				break;
			}
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	for(int i = 1; i <= n; i++){
		used[i] = true;
	}
	DFS(1);
}

