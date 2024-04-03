#include<algorithm>
#include<iostream>
#include<vector>
//백준 18111 마인크래프트
using namespace std;
int N,M,B, ret, height, temp1,temp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arr[N][M];
    int dp[N][M];
    cin >> N >> M >> B;
    for(int i = 0; i < N; i++) {
        for(int j =0; j < M; j++) {
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j =0; j < M; j++) {
            if(dp[i][j])
        }
    }

    
}