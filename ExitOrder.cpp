#include <iostream>
using namespace std;
void solve() {
    int N;
    cin>> N;
    int st =1,en=10;
    for (int ctr =1;ctr <=N; ctr++) {
        int curr;
        cin >>curr;
        if (curr< st||curr > en) {
            cout << "No\n";
            return;
        }if (ctr % 10 == 0) {
         st += 10;
         en += 10;
        }}
    cout << "Yes\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
