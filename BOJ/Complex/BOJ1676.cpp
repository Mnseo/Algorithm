#include<iostream>
#include<algorithm>
#include<string>
//백준 1676 팩토리얼 0의 개수
//메모리 2020KB 시간 0ms
//overflow 주의! 5^4보다 작으므로 125까지만 고려 가능
using namespace std;


int main() {
    int a;
    cin >> a;

    int cnt = 0;
    for(int i = 5; i <=a; i*=5) {
        cnt += (a/i);
    }

    cout << cnt << '\n';
}