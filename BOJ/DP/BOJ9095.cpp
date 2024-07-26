#include<bits/stdc++.h>
//BOJ9095- 1,2,3 더하기(실버3)
using namespace std;

void solve(int n) {
    //가림막 개수 
    vector<int> dp(12,0);
    //가림막은 최대 n-1부터 1개까지 할 수 있음 
    //case - 2개~n-2개 (n-1개 중에서 선택 ) + 2 (1개, n-1개)
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i =4 ; i <=n; i++) {
        dp[n] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>> n;
    while(n--) {
        int a;
        cin >> a;
        solve(a);
    }

    return 0;
}
