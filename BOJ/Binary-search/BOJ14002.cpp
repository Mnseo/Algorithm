#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

const int max_n = 1001;
int a[max_n], ret = 1, cnt[max_n], idx;
int prev_list[max_n];
vector<int> real;

void go(int idx) {
    if(idx == -1) return;
    real.push_back(a[idx]);
    go(prev_list[idx]);
    return;
}

int main() {
    int n; 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    fill(prev_list, prev_list+1001, -1);
    fill(cnt, cnt+1001, 1);

    for(int i= 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i] && cnt[i] < cnt[j] +1) {
                cnt[i] = cnt[j] +1;
                // printf("cnt[%d] : %d\n", i, cnt[i]);
                prev_list[i] = j;
                // printf("prev_list index[%d] : %d\n", i, j);
                if(ret < cnt[i]) {
                    ret = cnt[i];
                    // printf("ret : %d\n", cnt[i]);
                    idx = i;
                }
            }
        }   
    }

    printf("%d\n", ret);
    go(idx);
    for(int i = real.size() -1; i >= 0; i--) {
        printf("%d ", real[i]);
    }
    
    return 0;
}