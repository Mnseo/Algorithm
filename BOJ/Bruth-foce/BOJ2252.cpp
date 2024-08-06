#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m;

    vector<int> in_degree(n + 1, 0);  // 각 노드의 진입 차수
    vector<vector<int>> graph(n + 1); // 그래프 인접 리스트

    while(m--) {
        cin >> a >> b;
        graph[a].push_back(b);
        in_degree[b]++;
    }

    // 위상 정렬을 위한 큐
    queue<int> q;

    // 진입 차수가 0인 노드들을 큐에 삽입
    for(int i = 1; i <= n; i++) {
        if(in_degree[i] == 0) {
            q.push(i);
        }
    }

    // 위상 정렬 수행
    vector<int> result;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for(int next : graph[node]) {
            in_degree[next]--;
            if(in_degree[next] == 0) {
                q.push(next);
            }
        }
    }

    // 결과 출력
    for(int node : result) {
        cout << node << " ";
    }
    cout << "\n";

    return 0;
}
