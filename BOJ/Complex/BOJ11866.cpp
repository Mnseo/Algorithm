#include<bits/stdc++.h>
#include<queue>
//백준 11866 요세푸스 문제 0
using namespace std;

queue<int> Q;
int N,K;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;

    // 1 ~ N의 숫자 큐에 넣기 
    for(int i = 1; i <= N; i++) {
        Q.push(i);
    }

    cout << "<";

    while(Q.size() != 1) {
        for(int i = 0; i < K-1; i++) {
            Q.push(Q.front());  //7 3이면 3 4 5 6 7 1 2
            Q.pop();
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front() << ">";
    return 0;
    
    
}