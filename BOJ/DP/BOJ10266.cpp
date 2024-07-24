#include<bits/stdc++.h>
//백준 10266번 시계 사진들
using namespace std;

int main() {
    
    int n;
    scanf("%d", &n);

    vector<int> v(n), m(n);
    for(int i = 0; i < n; i++) {
        scanf("%d ", &v[i]);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        scanf("%d ", &m[i]);
    }
    sort(m.begin(), m.end());
    
    int a = v.back();
    int b = m.back();
    //간격이 모두 같으면 - possible
    for(int i = 0; i < n; i++) {

    }

}