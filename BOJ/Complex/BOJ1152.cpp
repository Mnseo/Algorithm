#include<bits/stdc++.h>
//백준 1157번 단어공부
using namespace std;

const int max_n = 30;
int charCount[max_n];

char solve(string s) {
    // 초기화
    memset(charCount, 0, sizeof(charCount));
    
    for(char c : s) {
        if(islower(c)) charCount[c - 'a']++;
        else if(isupper(c)) charCount[c - 'A']++;
    }
    
    int maxCount = 0;
    char result = '?';
    for(int i = 0; i < 26; i++) {
        if(charCount[i] > maxCount) {
            maxCount = charCount[i];
            result = 'A' + i; 
        } else if(charCount[i] == maxCount) {
            result = '?';
        }
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << solve(s) << endl;
}
