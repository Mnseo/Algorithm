#include<bits/stdc++.h>

using namespace std;
//ASCII A = 65, Z = 90, a = 97;
string str;
int cnt[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin>>str;

    for(char a: str) {
        cnt[a- 'a']++;
    }

    for(int i =0; i<26; i++) cout << cnt[i] << ' ';

    return 0;

}