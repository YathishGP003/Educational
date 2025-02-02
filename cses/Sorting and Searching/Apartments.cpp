#include<bits/stdc++.h>
using namespace std;

#define int long long

inline int nxt() {
    int x;
    cin >> x;
    return x;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = nxt(), m = nxt(), k = nxt();
    
    vector<int> A(n + 1);
    for(int i = 1; i <= n; i++) {
        A[i] = nxt();
    }

    vector<int> B(m + 1);
    for(int i = 1; i <= m; i++) {
        B[i] = nxt();
    }
    
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
 
    int a = 1, b = 1, ans = 0;
    while(a <= n && b <= m) {
        if(abs(A[a] - B[b]) <= k) {
            ans++;
            a++, b++;
        }
        else {
            if(A[a] < B[b]) a++;
            else b++;
        }
    }
    
    cout << ans << '\n';
    
    return 0;
}
