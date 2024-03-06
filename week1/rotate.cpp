#include <bits/stdc++.h>

using namespace std;
string dopa = "umzunsik";

int main() {
    //앞에서부터 세개 출력 (뒤에 index는 포함 x)
    cout << dopa.substr(0,3) << '\n';

    //거꾸로 출력 
    reverse(dopa.begin(), dopa.end());
    cout << dopa << '\n';

    //umzunsik 추가하기 
    cout << dopa + "umjunsik" << '\n';
    return 0;

}