#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    int a;
    scanf("%d", &a);
    
    int arr[a] = {};
    for(int i =0; i < a; i++) {
        scanf("%d", arr+i);
    }

    sort(arr, arr+a);
    
    for(int i = 0; i < a; i++) {
        printf("%d\n", arr[i]);
    }
}