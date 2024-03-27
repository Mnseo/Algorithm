#include<bits/stdc++.h>
//백준 11053 가장 긴 증가하는 부분 수열 
using namespace std;
int temp, res;

int main() {
    int n; 
    scanf("%d", &n);
    vector<int> a(n), dp(n,1);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i= 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end());
    return 0;
}