#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    int maxx = 90;
    vector<ll> dp(maxx);
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < maxx; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    for (int i = maxx - 1; ~i; --i) {
        if (n >= dp[i]) {
            cout << i;
            break;
        }
    }
}