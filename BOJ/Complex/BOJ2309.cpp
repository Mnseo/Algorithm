#include <bits/stdc++.h>

using namespace std;

int a[9];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 9; i++) {
        int temp;
        cin >> temp;
        if(temp < 100) {
            a[i] = temp;
        } else return 0;
    }
    sort(a, a+9);
    
    do {
        int sum = 0;
        for(int i = 0; i <7; i++) sum += a[i];
        if(sum == 100) break; //정지 조건 까먹지 말기
    }while(next_permutation(a,a+9));

    for(int i = 0; i < 7; i++) {
        cout << a[i] << "\n";
    }

    return 0;


}