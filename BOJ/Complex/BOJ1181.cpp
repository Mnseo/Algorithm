#include<string>
#include<algorithm>
#include<iostream>
// 백준 1181 단어 정렬
using namespace std;

int cmp(string a, string b) {
    if(a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

string v[20000];

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> v[i];
    }

    sort(v, v+a, cmp);

    for(int i = 0; i < a; i++) {
        if(v[i] == v[i-1]) continue;
        else cout << v[i] << '\n';
        
    }
}