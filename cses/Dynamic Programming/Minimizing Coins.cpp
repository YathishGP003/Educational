#include<bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

inline int nxt() {
    int x;
    cin >> x;
    return x;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = nxt(), x = nxt();
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        a[i] = nxt();
    }
        
    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
        
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] <= i) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
        
    cout << (dp[x] < 1e9 ? dp[x] : -1) << '\n';
        
    return 0;
}