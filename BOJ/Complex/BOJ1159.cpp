#include<bits/stdc++.h>
//백준 1159 - 농구 경기 
using namespace std;

int n;
const string none = "PREDAJA";
string res = "";
int cnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    string m[n] = {""};
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        cnt[str[0]-'a']++;
    }

    for(int i = 0; i<26; i ++) {
        if(cnt[i] >=5) res += char(i+'a');
    }

    if(res.empty()) cout << none;
    else cout << res; 

    return 0;
}