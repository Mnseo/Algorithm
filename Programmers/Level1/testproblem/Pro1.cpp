#include <bits/stdc++.h>
//프로그래머스 테스트 프로그램 
using namespace std;
vector<int> solution(vector<vector<int>> v) {
    sort(v.begin(), v.end(),[](const std::vector<int> &a, const std::vector<int> &b) {
        return a[0] < b[0];
    });
    vector<int> xCoords, yCoords;
    for(const auto& point: v) {
        xCoords.push_back(point[0]);
        yCoords.push_back(point[1]);
    }

    vector<int> missingPoint(2, 0);
    for (const int x : xCoords) {
        if (std::count(xCoords.begin(), xCoords.end(), x) == 1) {
            missingPoint[0] = x;
            break;
        }
    }

    for (const int y : yCoords) {
        if (std::count(yCoords.begin(), yCoords.end(), y) == 1) {
            missingPoint[1] = y;
            break;
        }
    }

    return missingPoint;
}

int main() {
    string input;
    getline(cin, input);

    vector<std::vector<int>> vec;
    stringstream ss(input);

    char ignoreChar;
    int num1, num2;

    while (ss >> ignoreChar >> ignoreChar >> num1 >> ignoreChar >> num2 >> ignoreChar) {
        vec.push_back({num1, num2});
        if (ss.eof()) break; 
    }

    vector<int> result = solution(vec);

    cout << "[" << result[0] << "," << result[1] << "]" << '\n';
}