#include<iostream>
#include<vector>
#include<algorithm>
// N이 입력으로 주어졌을때 1번째 2400, 2번째 1+2400, 3번째 2+2400. . .
// N <= 300일때 N번째 수
using namespace std;

const int INF = 1e6;
int n, cnt;

int solve(int n) {
    return (n-1) * 10000 + 2400;
}

int main() {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int res = solve(n);
    cout << res;
    return 0;
    
}

int main() {
    cin >> n;
    //for 문 
    for(int i = 2400; i < INF; i++) {
        string a = to_string(i);
        if(a.find("2400") != string::npos) {
            cnt++;
            if(n == cnt) {
                cout << a << '\n';
                break;
            }
            cout << cnt << " : " << a << '\n';
        }
    }
    //while 문
    int i = 2400;
    while(true) {
        string a = to_string(i);
        if(a.find("2400") != string::npos) {
            cnt++;
            if(n == cnt) {
                cout << a << '\n';
                break;
            }
            cout << cnt << " : " << a << '\n';
        }
    }
}