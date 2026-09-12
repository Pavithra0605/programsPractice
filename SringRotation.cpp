#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
using namespace std;
#define ll long long int
#define INF 1e18
void solve(){
    string s, t;
    cin >> s >> t;
    string dt = s + s;
    cout << (dt.contains(t) ? "Yes" : "No") << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
