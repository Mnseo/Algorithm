#include<iostream>
#include<algorithm>
// 백준 10810 최대, 최소
using namespace std;

const int max_n = 1000004;
int max, min = 0;
int arr[max_n] = {};

int main() {
    int a;
    cin >> a;

    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + a);

    cout << arr[0] << " " << arr[a-1];
    
    
    
}
