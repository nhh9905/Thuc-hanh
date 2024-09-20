#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    // freopen("a.inp", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int w, h, n, cnt = 1;
        cin >> w >> h >> n;
        while (w % 2 == 0) {
            w /= 2;
            cnt *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            cnt *= 2;
        }
        // cout << cnt << endl;
        if (cnt >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}