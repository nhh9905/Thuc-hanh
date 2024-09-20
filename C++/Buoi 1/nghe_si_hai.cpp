#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        cout << a1 + min(a2, a3)*2 + min(a1 + 1, abs(a3 - a2) + a4) << endl;
    }
}