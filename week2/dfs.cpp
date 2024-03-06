#include<bits/stdc++.h>

using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];

void dfs(int u) {
    visited[u] = 1;
    cout << u << "\n";
    for(int v: adj[u]) {
        //방문 했는지 안했는지 확인 
        if(visited[v]==0) {
            dfs(v); 
        }
    }
    cout << u << "로부터 시작된 함수가 종료 \n";
    return;
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    adj[5].push_back(2);

    dfs(1);
}