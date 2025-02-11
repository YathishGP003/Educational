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
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        a[i] = nxt();
    }
    
    std::sort(a.begin(), a.end());
    
    int suff = std::accumulate(all(a), 0ll);
    int pre = 0, ans = suff;
    for(int i = 0; i < n; i++) {
        suff -= a[i];
        ans = min(ans, (a[i] * i - pre) + (suff - a[i] * (n - i - 1)));
        pre += a[i];
    }
    
    cout << ans << '\n';
    
    return 0;
}
