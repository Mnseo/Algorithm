#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 0x3f3f3f3f
//BOJ11404 플로이드 
using namespace std;

int dp[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i < n; i++) {
        fill(dp[i], dp[i]+n+1, MAX);
    }
    for(int i = 1; i <= n; i++) {
        dp[i][i] = 0;
    }

    int a,b,c;
    while(m--) {
        cin >> a >> b >> c;
        dp[a][b] = min(dp[a][b], c);
    }

    //플로이드 - 와샬
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=n; j++) {
            if(dp[i][j] == MAX) {
                cout << "0 ";
            } else {
                cout << dp[i][j] << " ";
            }
        }
        cout << endl;
    }

}