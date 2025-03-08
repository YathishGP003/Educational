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
    
    int n = nxt();
    vector<int> dp(n + 1);
        
        dp[0] = 1;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= 6; j++) {
                if(j <= i) {
                    dp[i] = (dp[i] + dp[i - j]) % MOD;
                }
            }
        }
        
        cout << dp[n] << '\n';
        
    return 0;
}