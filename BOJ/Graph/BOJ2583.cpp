#include<bits/stdc++.h>
//BOJ 2583 영역구하기
using namespace std;

const int max_n = 104;
bool grid[max_n][max_n], visited[max_n][max_n];
int m, n, k, ey, ex;
vector<int> areas;
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int dfs(int y, int x) {
    if(y < 0 || y >= m || x < 0 || x>= n || visited[y][x] || grid[y][x]) return 0;
    int area = 1;
    visited[y][x] = true;
    for(int i = 0; i < 4; i++) {
        int ey = y + dy[i];
        int ex = x + dx[i];
        area += dfs(ey,ex);
    }
    return area;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(grid, false, sizeof(grid));
    memset(visited, false, sizeof(visited));

    cin >> m >> n >> k;
    for(int i = 0; i < k; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int y = y1; y < y2; y++) {
            for(int x = x1; x< x2; x++) {
                grid[y][x] = true;
            }
        }
    }

    for(int y = 0; y < m; y++) {
        for (int x= 0; x< n; x++) {
            if(!visited[y][x] && !grid[y][x]) {
                areas.push_back(dfs(y,x));
            }
        }
    }

    sort(areas.begin(), areas.end());
    cout << areas.size() << "\n";
    for(int area:areas) {
        cout << area << ' ';
    }

    return 0;

}
