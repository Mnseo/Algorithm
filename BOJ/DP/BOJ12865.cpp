//백준 12865 평범한 배낭

#include<bits/stdc++.h>
using namespace std;

int a,b,w,v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    vector<pair<int, int>> k(a);
    for(int i = 0; i < a; i++) {
        cin >> k[i].first >> k[i].second;
    }

    vector<int> dp(b+1, 0);

    for(int i = 0; i < a; ++i) {
        int weight = k[i].first;
        int value = k[i].second;
        for(int j = b; j >= weight; --j) {
            // cout << "j is " << j << '\n';
            dp[j] = max(dp[j], dp[j-weight] + value);
            // cout << "dp[j] is " << dp[j] << '\n';
            // cout << "dp[j-weight] is " << dp[j-weight] << '\n';
        }
    }

    cout << dp[b] << '\n';
}