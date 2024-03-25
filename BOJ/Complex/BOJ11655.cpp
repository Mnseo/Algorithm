#include<bits/stdc++.h>
//백준 11655 ROT13
using namespace std;
string a;

int main() {
    getline(cin, a);
    for(int i = 0; i < a.size(); i++) {
        if(a[i] >= 'a' && a[i] <= 'z') {
            if(a[i] + 13 > 'z') a[i] = a[i] + 13 - 26;
            else a[i] = a[i] + 13;
        } 
        else if(a[i] >= 'A' && a[i] <= 'Z') {
            if(a[i] + 13 > 'Z') a[i] = a[i] + 13 -26;
            else a[i] = a[i] + 13;
        }

        cout << a[i];
        
    }

    return 0;
}