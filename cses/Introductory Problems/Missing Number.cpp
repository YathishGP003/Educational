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
    
    int n = nxt();
    int sum = 0;
    
    for(int i = 1; i < n; i++) {
        sum += nxt();
    }
    
    int totalSum = n * (n + 1) / 2;
    cout << totalSum - sum << '\n';
        
    return 0;
}