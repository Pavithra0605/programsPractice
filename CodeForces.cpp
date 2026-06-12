#include <iostream>
using namespace std;

const int MAX = 200005;

int diff[MAX];
int cnt[MAX];
int pref[MAX];

int main()
{
    int n, k, q;
    cin >> n >> k >> q;


    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
    }

    for(int i = 1; i < MAX; i++)
    {
        cnt[i] = cnt[i - 1] + diff[i];
    }


    for(int i = 1; i < MAX; i++)
    {
        if(cnt[i] >= k)
            pref[i] = 1;
    }


    for(int i = 1; i < MAX; i++)
    {
        pref[i] += pref[i - 1];
    }

    while(q--)
    {
        int a, b;
        cin >> a >> b;

        cout << pref[b] - pref[a - 1] << "\n";
    }

    return 0;
}
