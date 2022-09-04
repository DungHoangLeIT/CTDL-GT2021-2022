#include<bits/stdc++.h>
using namespace std;

using namespace std;
int n,m,a[2000][2000],visited[2000];
vector< vector <int> > res;
void bfs(int u){
    queue<int> q;
    vector<int> v;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        v.push_back(tmp);
        for(int i=1;i<=n;i++){
            if(a[tmp][i]&&visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
        }
    }
    res.push_back(v);
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==0)
        bfs(i);
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i].size()<<" ";
        sort(res[i].begin(),res[i].end() );
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
            if(j!=res[i].size()-1)
            cout<<" ";
       }
        cout<<endl;
    }
    return 0;
}