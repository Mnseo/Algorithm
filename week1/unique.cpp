#include <bits/stdc++.h>

using namespace std;

vector<int> v = {2,3,4,5,1,2,3,4,5};
int main() {
    sort(v.begin(), v.end());

    for (int i: v) cout << i << " ";
    cout << '\n';

    // //중복 되지 않은 요소로 채운 후, 그 다음 이터레이터 반환
    // auto it = unique(v.begin(), v.end());
    
    // // 앞에서부터 중복되지 않게 채운 후 나머지 요소들은 그대로 
    // cout << it - v.begin() << '\n';
    
    // for(int i: v) cout << i << " ";
    // cout << '\n';

    //마지막으로 중복된 값 자르기 
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i: v) cout << i << " ";
    cout << '\n';

}