#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>

using namespace std;

int a,b,c;
vector<int> v(10,0);

void solve(string a) {
    for(char c: a) {
        v[c-'0']++;
    }

    for(int i =0; i < v.size(); i++) {
        cout << v[i] <<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a;
    cin >> b;
    cin >> c;

    int tmp = a*b*c;
    string s = to_string(tmp);
    solve(s);


}