#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
//BOJ1620: 나는야 포켓몬 마스터
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    vector<string> v;
    map<string,int> pokemon;
    vector<string> result;
    string name;

    for(int i = 0; i <a; i++) {
        cin >> name;
        v.push_back(name);
        pokemon.insert(make_pair(name,i));
    }
    for(int i = 0; i < b; i++) {
        cin >> name;
        if(name[0] >= 65 && name[0] <= 90) { 
            result.push_back(to_string(pokemon[name]));
        } else {
            result.push_back(v[stoi(name)]);
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout<<result[i] <<'\n';
    }

    return 0;
}