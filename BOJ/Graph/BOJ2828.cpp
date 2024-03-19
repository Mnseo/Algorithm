#include<bits/stdc++.h>
//BOJ 2828 사과 담기 게임 
using namespace std;

int n, m, j, ret = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> j;

    int start = 1, end = m;
    queue<int> apple;

    for(int i = 0; i < j; ++i) {
        int index;
        cin >> index;
        apple.push(index);
    }

    int count = 0;

    while(!apple.empty()) {
        int index = apple.front();
        apple.pop();
        if(index > end) {
            int gap = index - end;
            count += gap;
            start += gap, end += gap;
        } else if(index < start) {
            int gap = start - index;
            count += gap;
            start -= gap, end -= gap;
        } else count += 0;
    }

    ret = max(count, ret);
    cout << ret << '\n';


    return 0;

}