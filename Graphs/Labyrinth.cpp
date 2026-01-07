#include "bits/stdc++.h"
using namespace std;
using pi=pair<int, int>;

bool BFS(int row, int col, 
        const vector<vector<char>>& grid, vector<vector<int>>& vis, 
        vector<vector<pi>>& parent, vector<vector<char>>& pathDir,
        int rows, int cols, pi endPoint){
    vis[row][col]=1;
    queue<pair<int, int>>q;

    q.push({row, col});

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    char moveChar[] = {'U', 'R', 'D', 'L'};

    while(!q.empty()){
        auto [nRow, nCol] = q.front();
        q.pop();

        if(nRow == endPoint.first && nCol == endPoint.second){
            return true;
        }

        for(int i=0;i<4;i++){
            int xRow=nRow+dx[i];
            int xCol=nCol+dy[i];

            if(xRow>=0 && xRow<rows && xCol>=0 && xCol<cols && grid[xRow][xCol]!='#' && !vis[xRow][xCol]){
                vis[xRow][xCol]=1;
                parent[xRow][xCol]={nRow, nCol};
                pathDir[xRow][xCol]=moveChar[i];
                q.push({xRow, xCol});
            }
        }
    }
    return false;
}

int main(){
   int n, m; cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    pi start, end;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;cin >> ch;
            grid[i][j]=ch;
            if(ch == 'A'){
                start={i, j};
            }
            if(ch == 'B'){
                end={i, j};
            }
        }
    }
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<pi>> parent(n, vector<pi>(m, {-1, -1}));
    vector<vector<char>> pathDir(n, vector<char>(m, 0));

    bool found=BFS(start.first, start.second, grid, vis, parent, pathDir, n, m, end);

    if(!found){
        cout << "NO\n";
        return 0;
    }

    string path="";

    pi curr=end;
    while(curr != start){
        char dir=pathDir[curr.first][curr.second];
        path+=dir;
        curr=parent[curr.first][curr.second];
    }
    reverse(path.begin(), path.end());
    cout << "YES\n";
    cout << path.size() << '\n';
    cout << path << '\n';

    return 0;
}