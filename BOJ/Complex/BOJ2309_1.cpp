#include <bits/stdc++.h>
//BOJ 2309 일곱난쟁이 - 조합
using namespace std;

int a[9], sum;
vector<int> v; std::pair<int, int> ret; //데이터 구조
pair<int, int> ret; 

void solve() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < i; j++) {
            if(sum-a[i]-a[j] == 100) {
                ret = {i, j};
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i =0; i <9; i++) {
        cin >> a[i]; sum += a[i];
    }
    solve();
    for (int i = 0; i < 9; i++) {
        //이상한 사람 2명 뽑기 
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    return 0;
}