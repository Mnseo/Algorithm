#include<iostream>
#include<algorithm>
#include<cmath>
//백준 4153 직각 삼각형 

using namespace std;
int a,b,c;
int v[3];

void solve(int a[]) {
    sort(a, a+3);
    int result = (int)pow(a[0], 2) + (int)pow(a[1] , 2);
    if((int)pow(a[2],2) == result) cout << "right" << '\n';
    else cout << "wrong" <<'\n';
}


int main() {
    while(true) {
        cin >> v[0] >> v[1] >> v[2];
        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;
        solve(v);
    }

    return 0;
}