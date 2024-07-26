#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
#define MAX 0x3f3f3f3f
//BOJ1197 최소 스패닝 트리
using namespace std;

int dp[10001][10001];

int solve(int N) {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int V, E;
    cin >> V >> E;

    for(int i = 1; i < E; i++) {
        fill(dp[i], dp[i]+E+1, MAX);
    }

    int a, b, c;
    vector<pair<int,int>,int> v;
    std:pair<int,int> ret;
    for(int i = 1; i <= E; i++) {
        cin >> a >> b >> c;
        ret = {a,b};
        v.push_back(ret, c);
    }

    for(int i = 1; i <= E; i++) {
        for(int j = 1; i <= E; j++) {
            dp[i][j] = min(dp[i][j], dp[i])
        }
    }


}