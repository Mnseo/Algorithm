#include<bits/stdc++.h>
//백준 2910 빈도 정렬 
using namespace std;

int main() {
    int k = 2;
    cin >> k;
    std::cin.ignore();

    vector<string> lines;
    string line;

    int n, c;

    for(int i = 0; i < k; i++) {
        getline(cin, line);
        n = (int)line[0];
        c = (int)line[2];
    }

    cout << n << " " << c;

    return 0;

}