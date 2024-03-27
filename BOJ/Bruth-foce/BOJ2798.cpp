#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
// 백준 2798번 블랙잭 
using namespace std;

int n, m;

int solve(vector<int>& ret) {
    int answer = 0;
    for(int i =0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            for(int k = j+1; k < n; ++k) {
                int sum = ret[i] + ret[j] + ret[k];
                if(sum <= m) answer = max(sum, answer); 
            }
        }
    }
    return answer;
}

int main() {
    scanf("%d %d", &n, &m);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int res = solve(a);

    printf("%d", res);
    return 0;
    
}