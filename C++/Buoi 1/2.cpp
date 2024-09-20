#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    // freopen("a.inp", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b) {
            if (b < c)
                cout << "STAIR\n";
            else if (b > c)
                cout << "PEAK\n";
            else
                cout << "NONE\n";
        }
        else
            cout << "NONE\n";
    }
}