#include <bits/stdc++.h>
using namespace std;

const int v = 3;
int a[v][v];
int visited[v][v];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void go(int y, int x) {
    visited[y][x] = 1;
    cout << y << " : " << x << "\n";
    for(int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= v || nx < 0 || nx >= v) continue;
        if(a[ny][nx] == 0) continue;
        if(visited[ny][nx]) continue;

        go(ny, nx);
        
    }
    return;
}

int main() {
    for (int i = 0; i <v; i++) {
        for(int j = 0; j< v; j++) {
            cin>> a[i][j];
        }
    }
    go(0,0);
}
