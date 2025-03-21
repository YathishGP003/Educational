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
    
    int ans = 0, curr = 0;
    for(int i = 0; i < n; i++) {
        curr += a[i];
        if(curr < 0) {
            curr = 0;
        }
        ans = std::max(ans, curr);
    }
    
    if(ans == 0) {
        ans = *max_element(all(a));
    }
    
    cout << ans << '\n';
    
    return 0;
}
