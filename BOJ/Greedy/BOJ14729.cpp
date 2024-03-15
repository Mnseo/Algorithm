#include <bits/stdc++.h>
//백준 14729 - 칠무해
using namespace std;

typedef unsigned long long ll;
const int INF = 987654321;
int n;
double temp;
priority_queue<double> pq;
vector<double> v;

int main() {
    cin >> n;
    for(int i =0; i < n; i++) {
        cin >> temp;
        if(pq.size() == 7) {
            pq.push(temp);
            pq.pop();
        } else pq.push(temp);
    }
    while(pq.size()) {
        v.push_back(pq.top());
        pq.pop();
    }

    reverse(v.begin(),v.end());
    for(double i : v) printf("%.3lf\n", i);
    return 0;
}