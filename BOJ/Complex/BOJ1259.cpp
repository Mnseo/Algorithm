#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
//백준 1259번 팰린드롬수
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> a; 

    while(true) {
        int num = -1;
        cin >> num;
        if(num == 0) {
            break;
            }
        else {
            a.push_back(num);
        }
    }

    for(int i = 0; i < a.size(); i++) {
        string s = to_string(a[i]);
        bool isPalindrome = true;
        for(int j = 0; j < s.length(); j++) {
            if(s[j] != s[s.length() -1 -j]) {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome) {
            cout << "yes" << '\n'; 
        } else {
            cout << "no" << '\n';
        }
    }
    
}