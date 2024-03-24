#include <iostream>
#include <string>
#include <vector>
//백준 10809 알파벳 찾기 
using namespace std;

int main() {
    string inputStr;
    
    cin >> inputStr;

    for(char i = 'a'; i < 'z'; i++) {
        cout << (int)inputStr.find(i) << ' ';
    }

}