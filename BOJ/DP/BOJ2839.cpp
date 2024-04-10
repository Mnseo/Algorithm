#include<iostream>
#include<algorithm>
// BOJ 2839: 설탕 배달
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int kg = 0;
    int cnt = 0;
    cin >> kg;
    int a,b;
    a = kg/5;
    while(1) {
        if(a < 0) {
            cout << "-1";
            return 0;
        } 
        if((kg-(5*a))%3 ==0) {
            b = (kg-(5*a))/3;
            break;
        }
        a--;
    }

    cout<< a+b;
    return 0;

}