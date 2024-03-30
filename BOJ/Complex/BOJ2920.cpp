#include<cstdio>
#include<algorithm>
#include<string>
//백준 2920 음계
using namespace std;
const int length = 8;
string asc_str = "ascending";
string desc_str = "descending";
string mix_str = "mixed";
int a[length];

int main() {
    for(int i = 0; i < length; i++) {
        scanf("%1d", a + i);
    
    }
    int asc =0, desc = 0;
    for(int i = 0; i < length-1; i++) {
        int tmp = a[i];
        int tmp2 = a[i+1];
        if(tmp > tmp2) {
            printf("desc tmp : %d tmp2: %d\n", tmp, tmp2);
            desc++;
        } else if (tmp < tmp2) {
            printf("asc tmp : %d tmp2: %d\n", tmp, tmp2);
            asc++;
        }
    }

    printf("asc: %d desc : %d\n", asc, desc);

    if(asc > 0 && desc == 0) {
        printf("%s", asc_str.c_str());
    } else if(asc == 0 && desc > 0) {
        printf("%s", desc_str.c_str());
    } else if (asc > 0 && desc > 0) {
        printf("%s", mix_str.c_str());
    }

    return 0;

}