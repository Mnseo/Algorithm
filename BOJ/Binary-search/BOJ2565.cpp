#include<algorithm>
#include<vector>
#include<iostream>
//백준 2565 전깃줄 

using namespace std;

int main() {
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a;

    vector<pair<int, int>> v(a);

    for(int i = 0; i < a; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    vector<int> dp(a,1);
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < i; ++j) {
            if(v[i].second  > v[j].second) {
                dp[i] = max(dp[i], dp[j] +1);
            }
        }
    }
    int res = *max_element(dp.begin(), dp.end());
    cout << a - res << endl;

    return 0;
}