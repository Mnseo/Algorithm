#include<iostream>
#include<algorithm>
#include<string>
// 백준 10250 ACM 호텔
using namespace std;

string solve(int width, int height, int number) {
    int floor = number % height;
    int room = number / height + 1;
    if(floor == 0) {
        floor = height;
        room -= 1;
    }
    string roomNumber = to_string(floor) + (room < 10 ? "0" + to_string(room) : to_string(room));
    return roomNumber;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    while(a--) {
        int h, w, n;
        cin >> h >> w>> n;
        cout << solve(w, h, n) << '\n';
    }
}