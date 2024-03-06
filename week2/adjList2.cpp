#include <bits/stdc++.h>

using namespace std;

const int V = 10;
vector<int> adj[V];
int visited[V];

void go(int v){
    visited[v] = 1;
    cout <<  v << '\n';
    for(int there: adj[v]) {
        if(visited[there]) continue;
        else go(there);
    }
    return;
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    
    adj[2].push_back(1);
    adj[3].push_back(3);
    adj[3].push_back(4);

    for(int i = 0; i < V; i++) {
        if(adj[i].size() && visited[i] == 0) go(i);
    }


}