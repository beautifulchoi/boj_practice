#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    int dx[4]= {-1,0,1,0};
    int dy[4]={0,-1,0,1};
    int cnt=0;
    //1. 배열에 길 저장
    int path[n][m];
    int visited[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a;
            cin>>a;
            path[i][j]=a;
        }
    }

    queue<pair<int,int>> q;
    visited[0][0]=1;
    q.push({0,0});
    int i=0; int j=0;

    while(q.size()){
        tie(j,i)= q.front(); q.pop();
       
        for(int d=0; d<4; d++){
            x=j+dx[d];
            y=i+dy[d];
            if(x<0||y<0||y>n-1||x>m-1||path[y][x]==0) continue;
            if(visited[y][x]) continue;
            q.push({y,x});
            visited[y][x]=visited[i][j]+1;

        }

    }
    cout<<visited[n-1][m-1];
    return 0;
}