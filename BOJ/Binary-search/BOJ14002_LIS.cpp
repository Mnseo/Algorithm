#include<cstdio>
#include<algorithm>
//백준 14002 가장 긴 부분이 증가하는 수열 4

using namespace std;

int n, lis[1001], len, num;
int main() {
    scanf("%d", &n);
    for(int i =0; i < n; i++) {
        scanf("%d", &num);
        auto lowerPos = lower_bound(lis, lis+len, num);
        if(*lowerPos == 0) len++;
        *lowerPos = num;

        for(int j = 0; j < n; j++) {
            printf("%d ", lis[j]);
        }

        printf("\n");
    }
    printf("%d", len);
    return 0;
}