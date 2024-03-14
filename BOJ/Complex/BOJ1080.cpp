#include <bits/stdc++.h>
//백준 10808 알파벳 
using namespace std;

std::vector<std::pair<string,int>> ret;

void inputAlphaBet() {
    for(char ch='a'; ch<= 'z'; ++ch) {
        ret.push_back(make_pair(string(1,ch), 0));
    }
}

void count(string input) {
    for(char ch: input) {
        int index = ch - 'a';
        if(index >= 0 && index < ret.size()) {
            ret[index].second++;
        }
    }

}

int main() {
    inputAlphaBet();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a;
    cin >> a;

    count(a);

    for(const auto& p: ret) {
        cout << p.second << ' ';
    }
    return 0;

}