#include<bits/stdc++.h>
#include<vector>
#include<string>
//백준 14888 연산자 끼워넣기 
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, max, min;
    vector<int> v;
    vector<int> num;

    cin >> a;

    for(int i = 0; i < a; i++) {
        cin >> num[i];
    }
    for(int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    vector<int> charNum(a-1,0);
    
    //max는 +를 앞에 두고, x를 뒤에 
    for(int i = 0; i < 4; i++) {
        if(num[1] != 0 || num[3] != 0) {
            
        }
    }
}