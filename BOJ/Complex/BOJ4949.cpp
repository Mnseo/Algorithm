#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
//백준 4949 균형잡힌 세상
using namespace std;

int main() {
    while(true) {
        string input;
        getline(cin, input);

        if (input == '.') {
            break;
        }

        stack<char> s;
        bool flag = 0;
        
        for(char c: input) {
            if(c == '(' || c=='[') s.push(c);

            else if(c==')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    flag = 1;
                    break;
                }
            }
            else if(c==']') {
                if(!s.empty() && s.top() == '[') {
                    s.pop();
                } else {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0 && s.empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}