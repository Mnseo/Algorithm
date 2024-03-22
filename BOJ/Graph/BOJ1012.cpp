#include <bits/stdc++.h>
//백준 1012번 유기농 배추 
using namespace std;
const int max_n =104;
int t, n, m, a[max_n][max_n], k, x,y,ny,nx,ret; 
bool visited[max_n][max_n];
int dy[4] = {1,0,-1, 0};
int dx[4] = {0, 1, 0, -1};

void go(int y, int x) {
    visited[y][x] = 1;
    for(int i = 0; i <4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny <0 || ny >= n || nx < 0 || nx >= m) continue;
        if(!visited[ny][nx] && a[ny][nx] == 1) go(ny, nx);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--) {
        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        ret = 0;
        cin >> m >> n >> k;

        for(int i =0; i < k; i++) {
            cin >> x >> y;
            a[y][x] = 1;  
        }
        for(int i =0; i < n; i++) {
            for(int j =0; j< m; j++) {
                if(a[i][j] == 1 && !visited[i][j]) {
                    go(i, j); 
                    ret++;
                }
            }
        }
        cout<< ret << "\n";
    }
    return 0;
}
