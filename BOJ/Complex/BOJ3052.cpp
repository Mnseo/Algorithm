#include<iostream>
#include<algorithm>
#include<vector>
//백준 3052 나머지 
using namespace std;

vector<int> v(42,0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ret = 0;
    for(int i =0; i < 10; i++) {
        int a = 0;
        cin >> a;
        int res = a % 42;
        v[res]++;
    }

    for(int i = 0; i < v.size(); i++) {
        if(v[i] >=1) ret++;
    }

    cout << ret <<'\n';

}