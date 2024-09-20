#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    ll l = max(l1, l2), r = min(r1, r2);
    if (l <= r) {
        ll s = r - l + 1;
        if (k >= l && k <= r)
            --s;
        cout << s;
    }
    else
        cout << 0;
}