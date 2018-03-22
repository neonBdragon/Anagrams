#include <bits/stdc++.h>

using namespace std;

int main(){

    int size,res=0;
    cin >> size;
    map<string, int> words;
    string line;
    for(int i = 0; i < size; i++){
        cin >> line;
        sort(line.begin(), line.end());
        words[line]++;
    }
    for(auto i = words.begin(); i != words.end(); i++)
    res = max(res, i->second);
    cout << res;

    return 0;
}
