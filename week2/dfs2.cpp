#include <bits/stdc++.h>

using namespace std;

int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};
int m,n,k,y,x,ret,ny,nx,t;
int a[104][104];
bool visited[104][104];

void dfs(int y, int x) {
    visited[y][x] = 1;
    for(int i  = 0; i <4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];

        if(ny < 0 || ny >=n || nx <0 || nx >= m) continue;
        if(a[ny][nx] = 1 && !visited[ny][nx]) {
            dfs(ny,nx);
        }
    }
}


int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 1 && visited[i][j]) {
                ret++; dfs(i,j);
            }
        }
    }

    cout << ret << "만큼 소리지르다";
    return 0;


}