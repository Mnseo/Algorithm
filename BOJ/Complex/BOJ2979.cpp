#include<bits/stdc++.h>
//백준 2979 - 트럭주차 
using namespace std;

//1분 A*분, 2대- *B*2, 3대 3*C*

int A,B,C;
int timeCount[104] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C;

    int n,m, maxTime = 0;
    for(int i = 0; i < 3; i++) {
        cin >> n >> m;
        for(int j = n; j < m; j++) {
            timeCount[j]++;
        }
        maxTime = max(maxTime, m);
    }

    int res = 0;
    for(int i = 1; i <= maxTime; i++) {
        if(timeCount[i] == 1) {
            res += A;
        } else if(timeCount[i] == 2) {
            res += 2*B;
        } else if(timeCount[i] == 3) {
            res += 3*C;
        }
    }

    cout << res << '\n';

    return 0;

}