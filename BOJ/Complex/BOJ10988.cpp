#include<bits/stdc++.h>
//백준 10988 팰린드롬인지 확인하기

using namespace std;
string input;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    bool res = true;
    for(int i = 0; i < input.length() /2; i++) {
        if(input[i] != input[input.length()-1-i]) {
            res = false;
            break;
        }
    }

    if(res) cout << 1;
    else cout << 0;
}