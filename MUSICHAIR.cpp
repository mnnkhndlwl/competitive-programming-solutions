#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n; cin >> n;
        n--;
        int ans = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans++;
                if (i * i != n)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
}