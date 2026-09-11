#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve() {
    int N; cin >> N;
    vector<int> cmn(26, 50);
    for(int i =0;i <N;i++) {
        string s; cin >> s;
        vector<int> curr(26, 0);
        for(char ch :s) {
            curr[ch-'a']++;
        }
        for(int j =0;j <26;j++) {
            cmn[j] =min(cmn[j],curr[j]);
        }
    }
    for(int i =0;i<26;i++) {
        while (cmn[i]--) {
            cout << char('a' +i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
