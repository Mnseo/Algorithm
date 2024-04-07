#include<cstdio>
#include<algorithm>
#include<vector>
// 백준 1920 수 찾기
using namespace std;

int n, m, temp, r, l;

int main() {
    scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end());
    
    scanf("%d", &m);
    vector<int> b(m);
    vector<int> result(m);

    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for(int i =0; i < m; i++) {
        int l = 0, r = n-1;
        bool found = false;
        while(l <= r) {
            int mid = (l+r)/2;
            if(a[mid] == b[i]) {
                result[i] = 1;
                found = true;
                break;
            } else if(a[mid] > b[i]) {
                r = mid -1;
            } else  {
                l = mid +1;
            }
        }
        if (!found) {
            result[i] = 0;  
        }
    }
    
    for(int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }
    
}

