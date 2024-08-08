#include<bits/stdc++.h>
#define NUM 1000000
//백준 1904 - 01 타일 
using namespace std;

int cache[NUM];

void solve(int n) {
    //00은 2.. 4.. 6.. 짝수개로만 붙을 수 있고 그 사이나 끝에만 1 가능
    
    cache[1] = 1;
    cache[2] = 2;
    for(int i = 3; i <= n; i++) {
        cache[i] = (cache[i-1] + cache[i-2])% 15746 ;
    }

    cout << cache[n];

}

int main() {
    int N;
    cin >> N;
    solve(N);

    return 0;
}