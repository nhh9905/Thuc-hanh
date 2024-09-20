#include <bits/stdc++.h>
#define ll long long
using namespace std;
int doben(ll n) {
    return 0;
}
ll tich(ll n) {
    ll s = 1;
    while (n > 0) {
        s *= (n % 10);
        n /= 10;
    }
    return s;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, s = 0;
        cin >> n;
        while (n > 9) {
            ++s;
            n = (ll)tich(n);
        }
        cout << s << endl;
    }
}