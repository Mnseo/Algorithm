#include<bits/stdc++.h>
//BOJ 3190 뱀
using namespace std;

const int max_n = 104;
int n, k, l, x, y;
int board[max_n][max_n];
vector<pair<int, char>> v;
char c;

int move(int time, char move) {
    if(move == 'D') {

    } else if(move == 'L') {

    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin >> k;
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        //사과 위치 표시 => 1
        board[y][x] = 1;
    }
    cin >> l;
    //방향 정보 추가 
    for(int i = 0; i < l; i++) {
        int t1; char t2;
        cin >> t1 >> t2;
        v.push_back({t1, t2});
    }
    
    for(int i =0; i< n; i++) {
        for(int j = 0; j < n; j++) {
        }
    }

    
}