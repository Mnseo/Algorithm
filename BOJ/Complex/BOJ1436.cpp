#include<iostream>
#include<algorithm>
//백준 1436번 영화감독 숌

using namespace std;
int n; 

int main() {
    cin >> n; 
    int i = 666; 
    for(;; i++){
        cout << i << '\n';
        if(to_string(i).find("666") != string::npos)n--; 
        if(n == 0)break;
    }
    cout << i << "\n"; 
}