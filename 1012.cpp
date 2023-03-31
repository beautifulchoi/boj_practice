#include <bits/stdc++.h>
using namespace std;

int path[51][51];
int visited[51][51];
int n,m,t,k;

int main(){
    void dfs(int x, int y);
    cin>>t;
    for(int q=0; q<t; q++){
        fill(&path[0][0], &path[0][0]+51*51,0);
        fill(&visited[0][0], &visited[0][0]+51*51,0);
        cin>>m>>n>>k;
        for(int i=0; i<k; i++){
            int x,y;
            cin>>x>>y;
            path[y][x]=1;
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j]==0 && path[i][j]==1){
                    dfs(j,i);
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}
void dfs(int x, int y){
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,1};
    
    for(int a=0; a<4; a++){
        int nx=x+dx[a];
        int ny=y+dy[a];
        if(nx<0||ny<0||nx>=m||ny>=n) continue;
        if(visited[ny][nx]==1) continue;
        if(path[ny][nx]==1 &&visited[ny][nx]==0){
            visited[ny][nx]=1;
            dfs(nx,ny);
        }
    }
    return;
}