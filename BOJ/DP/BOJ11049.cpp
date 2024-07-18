#include<bits/stdc++.h>
//BOJ11049 - 행렬 곱셈 순서 (행렬 체인 곱셈)
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> v(N);
    for(int i =0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }

    vector<vector<int>> dp(N, vector<int>(N,INT_MAX));
    for(int i = 0; i < N; i++) {
        dp[i][i] = 0;
    }

    for(int len = 1; len < N; ++len) {
        for(int i = 0; i < N-len; ++i) {
            int j = i + len;
            for(int k = i; k < j; ++k) {
                int cost = dp[i][k] + dp[k+1][j] + v[i].first * v[k].second * v[j].second;
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << dp[0][N-1] << '\n';

    return 0;
}