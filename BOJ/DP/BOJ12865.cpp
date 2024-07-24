//백준 12865 평범한 배낭
#include <bits/stdc++.h>
using namespace std;

vector<int> compute_lps(vector<int>& pattern) {
    int n = pattern.size();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

bool kmp_search(vector<int>& text, vector<int>& pattern) {
    vector<int> lps = compute_lps(pattern);
    int i = 0, j = 0;
    int n = text.size();
    int m = pattern.size();
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == m) {
            return true;
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}

bool check_same_clock(vector<int>& v, vector<int>& m, int n) {
    vector<int> diff_v(n), diff_m(n);
    
    for (int i = 1; i < n; i++) {
        diff_v[i-1] = v[i] - v[i-1];
        diff_m[i-1] = m[i] - m[i-1];
    }
    diff_v[n-1] = 360000 + v[0] - v[n-1];
    diff_m[n-1] = 360000 + m[0] - m[n-1];
    
    vector<int> double_diff_v = diff_v;
    double_diff_v.insert(double_diff_v.end(), diff_v.begin(), diff_v.end());
    
    return kmp_search(double_diff_v, diff_m);
}

int main() {
    int n;
    scanf("%d", &n);

    vector<int> v(n), m(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }
    sort(m.begin(), m.end());
    
    if (check_same_clock(v, m, n)) {
        printf("possible\n");
    } else {
        printf("impossible\n");
    }

    return 0;
}
