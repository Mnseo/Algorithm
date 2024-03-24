#include<bits/stdc++.h>
// 백준 14890 경사로
using namespace std;

const int max_n = 104;
int n, l, ret;
int a[max_n][max_n], b[max_n][max_n];

void solve(int a[max_n][max_n]) {
    for(int i = 0; i < n; i++) {
        int cnt = 1;
        int j;
        for (j = 0; j < n-1; j++) {
            if(a[i][j] == a[i][j+1]) cnt ++;
            else if(a[i][j] +1 == a[i][j+1] && cnt >= l) cnt = 1;
            else if(a[i][j] -1 == a[i][j+1] && cnt >= 0) cnt = -l+1;
            else break;
        }
        if(j == n-1 && cnt >= 0 )ret++;
    }
    return;
}

int main() {
    cin >> n >> l;
    
    for(int i  = 0; i < n; i++) {
        for(int j =0; j < n; j++) {
            cin >> a[j][i];
            b[i][j] = a[j][i];
        }
    }

    solve(a);
    solve(b);

    cout << ret;

}