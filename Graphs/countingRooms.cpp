#include "bits/stdc++.h"
using namespace std;

void BFS(int row, int col,const  vector<vector<char>>& grid, vector<vector<int>>& vis, int rows, int cols){
    vis[row][col]=1;
    queue<pair<int, int>>q;
    q.push({row, col});

    int dx[] ={0, 1, 0, -1};
    int dy[] ={1, 0, -1, 0};

    while(!q.empty()){
        auto [nRow, nCol]=q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int xRow = nRow + dx[i];
            int xCol = nCol + dy[i];

            if(xRow>=0 && xRow<rows && xCol>=0 && xCol<cols && !vis[xRow][xCol] && grid[xRow][xCol] == '.'){
                vis[xRow][xCol] = 1;
                q.push({xRow, xCol});
            }
        }
    }
}

int main(){
    int n, m; cin >> n >> m;
    vector<vector<char>> map(n, vector<char>(m, '.'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;cin >> ch;
            map[i][j]=ch;
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    int rooms=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(map[row][col] == '.' && !vis[row][col]){
                BFS(row, col, map, vis, n, m);
                rooms++;
            }
        }
    }
    cout << rooms << '\n';    
    return 0;
}