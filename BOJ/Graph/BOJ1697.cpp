#include<bits/stdc++.h>
#include<queue>
//백준 1697 숨바꼭질 
using namespace std;

const int MAX = 100001;
int N,K;
bool visited[MAX];
int path[MAX];
queue<int> q;

void solve(int v) {
    path[v] = 0;
    visited[v] = true;
    q.push(v);

    while(q.empty()) {
        int w = q.front();
        if(w == K) break;
        q.pop();
        
        if(visited[w+1] == 0 && w+1 >= 0 && w + 1 < MAX) {
            visited[w+1] = true;
            q.push(w+1);
            path[w+1] = path[w]+1;
        }

        if(visited[w-1] == 0 && w-1 >= 0 && w-1 < MAX) {
            visited[w-1] = true;
            q.push(w-1);
            path[w-1] = path[w] + 1;
        }
        if(visited[w*2] == 0 && w*2 >= 0 && w*2 < MAX) {
            visited[w*2] = true;
            q.push(w*2);
            path[w*2] = path[w] + 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    solve(N);

    cout << path[K];

    return 0;

}