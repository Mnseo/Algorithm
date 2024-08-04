#include<bits/stdc++.h>
#include<vector>
#include<queue>
//백준 1717번 집합의 표현 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,m,a,b,d[32005];
    vector<int> v[32005];
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> n >> m;
    while(m--) {
        cin >> a >> b;
        v[a].push_back(b);
        d[b]++;
    }

    for(int i = 1; i <=n; i++) {
        if(!d[i]) {
            pq.push(i);
        }
    }

    while(!pq.empty()) {
        int pt = pq.top();
        pq.pop();
        cout << pt << " ";

        for(auto i: v[pt]) {
            d[i]--;
            if(!d[i]) {
                pq.push(i);
            }
        }
    }

}

