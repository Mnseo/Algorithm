#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    int a;
    scanf("%d", &a);
    
    int arr[a];
    int sum =0;
    for(int i =0; i < a; i++) {
        scanf("%1d", arr +i);
    }
    for(int i = 0; i < a; i++) {
        sum += arr[i];
    }

    printf("%d", sum);

    
    
}