#include<iostream>
#include<algorithm>
// 백준 2292 벌집
using namespace std;

int solve(int n) {
    int numCircle = 1, maxRoomNumber = 1;

    while(true) {
        if(n <= maxRoomNumber) {
            return numCircle;
            break;
        }

        maxRoomNumber += 6 * numCircle;
        numCircle++;

    }
}

int main() {
    int a;
    cin >> a;
    int res = solve(a);

    cout << res <<'\n';
    
    return 0;
}