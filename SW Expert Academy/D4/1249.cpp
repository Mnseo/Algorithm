#include<cstdio>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
//SW 아카데미 1249 보급로
using namespace std;


int main() {
    int T;
    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};

    scanf("%d", &T);
    for(int t = 1; t <= T; t++) {
        int k;
        scanf("%d", &k);

        vector<vector<int>> map(k, vector<int>(k));
        vector<vector<int>> distance(k, vector<int>(k,INT_MAX));
        queue<pair<int, int>> q;

        for(int i =0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                scanf("%1d", &map[i][j]);
            }
        }     

        q.push({0,0});
        distance[0][0] = 0;

        while(q.size()) {
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < k && ny >= 0 && ny < k) {
                    if(distance[nx][ny] > distance[x][y] + map[nx][ny]) {
                        distance[nx][ny] = distance[x][y] + map[nx][ny];
                        q.push({nx,ny});
                    }
                }
            }
        }
        printf("#%d %d\n", t, distance[k-1][k-1]);
    }

}