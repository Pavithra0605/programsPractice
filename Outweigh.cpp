#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
void solve() {
    int N;cin >> N;
    vector<ll> a(N), b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }
    ll am = 0;
    ll bm = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] >b[i]) {
            am += a[i]-b[i];
        } else {
            bm+= b[i]-a[i];
        }
    }
    if (am== 0) {
        cout << "No"<<endl; return;
    }
    ll largeWeight = bm/am+ 1;
    cout << "Yes"<<endl;
    for (int i =0; i< N;i++) {
        if (a[i] >b[i]) {
            cout << largeWeight << " ";
        } else {
            cout << 1 << " ";
        }
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
