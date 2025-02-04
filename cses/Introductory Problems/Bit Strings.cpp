#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

inline int nxt() {
    int x;
    cin >> x;
    return x;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    auto binpow = [&](int x, int y) -> int {
        int ans = 1, po = x % MOD;
        while (y > 0) {
            if (y & 1) {
                ans = ans * po % MOD;
            }
            po = po * po % MOD;
            y >>= 1;
        }
        return ans;
    };
    
    int n = nxt();
    cout << binpow(2, n) << '\n';
    
    return 0;
}
