#include<iostream>
#include<algorithm>
//BOJ 2869 - 달팽이는 올라가고싶다 (시간 초과 주의)
using namespace std;

int main() {
    int a,b,v = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> a >> b >> v;
    int day =1;
    day += (v-a)/(a-b);
    if((v-a)%(a-b) !=0)
        day++;
    if(a>=v)
        cout << "1";
    else 
        cout << day;
}