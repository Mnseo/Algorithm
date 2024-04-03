#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
//백준 8958 OX 퀴즈
using namespace std;

int main() {
    int a;
    cin >> a;
    cin.ignore(); 

    while(a--) {
        string s;
        getline(cin, s);  
        int current_score = 0, total_score = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'O') {
                current_score++;  
                total_score += current_score;  
            } else {
                current_score = 0;  
            }
        }

        cout << total_score << endl;  
    }

    return 0;
}