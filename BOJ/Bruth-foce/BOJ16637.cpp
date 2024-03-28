#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//백준 16637번 괄호 추가하기 

using namespace std;

vector<int> num;
vector<char> oper_str;
int n, ret = -987654321;//최소 범위 설정(밖); (-2^31)
string s;

int calculate(int a, int b, char op) {
    switch(op) {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
    }
    return 0;
}

void go(int here, int _num) {
    if(here == num.size() -1) {
        ret = max(ret, _num);
        return;
    }
    go(here + 1, calculate(_num, num[here+1], oper_str[here]));
    if(here +2 <= num.size() -1) {
        int temp = calculate(num[here+1], num[here+2], oper_str[here+1]);
        go(here+2, calculate(_num, temp, oper_str[here]));
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) num.push_back(s[i]-'0');
        else oper_str.push_back(s[i]);
    }
    go(0, num[0]);

    cout << ret << "\n";
    return 0;
}