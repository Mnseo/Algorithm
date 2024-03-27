#include<iostream>
#include<string>
#include<algorithm>
//SW 아카데미 1249 보급로
using namespace std;

const int max_n = 104;
int dy[4] = {1,0,-1,0};
int dx[4] = {0, 1, 0, -1};
int ey, ex, cnt, ret, x,y, k;
int arr[max_n][max_n], visited[max_n][max_n] = {0,0};

int go(int y, int x, int val) {
    int result = 0;
    visited[y][x] = 1;
    result += arr[y][x];
    for(int i = 0; i < 4; i++) {
        ey = y + dy[i];
        ex = x + dx[i];
        if(y > 0 || y < k || x > 0 || x < k || !visited[ey][ex]) {
            go(ey, ex, arr[ey][ex]);
        }
    }
    return result;
}

int main()
{
	int test_case;
	int T;
	cin>>T;
    k = T;
    int result;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        for(int i = 0; i < T; i++) {
            for(int j = 0; j < T; j++) {    
                cin >> arr[j][i];       
                if(visited[i][j] != 1 | i < T || i > 0 || j > 0 || j < T) {
                    result = go(i, j, arr[j][i]);
                }
            }
        }
        cout << "#" << test_case << " " << result << '\n';
    }
	return 0;
}