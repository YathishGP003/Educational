#include<bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

inline int nxt() {
    int x;
    cin >> x;
    return x;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = nxt();
    int p = 5, ans = 0;
    while(p <= n) {
        ans += n / p;
        p *= 5;
    }
    
    cout << ans << '\n';

    return 0;
}
