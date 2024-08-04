#include<bits/stdc++.h>
#include<vector>
//백준 고층 건물 
using namespace std;

int res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> building(n);
    vector<int> cnt(n,0);

    for(int i = 0; i < n; i++) {
        cin >> building[i];
    }

    for(int i = 0; i < n; i++ ) {
        double max_level = -9999999999;
        for(int j = i+1; j < n; j++) {
            double level = (double)(building[j]-building[i]) / (j-i);
            if(level > max_level) {
                cnt[i]++;
                cnt[j]++;
                max_level = level;
            }
        }
    }

    for(auto elem:cnt) {
        res = max(res, elem);
    }

    cout << res <<'\n';

}