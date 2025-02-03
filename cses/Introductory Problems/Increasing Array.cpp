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
        
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        v[i] = nxt();
    }
            
    int ans = 0;  
    for(int i = 1; i < n; i++) {
        if(v[i - 1] <= v[i]) {
            continue;
        }
        ans += abs(v[i] - v[i - 1]);
        v[i] = v[i - 1]; 
    }
    
    cout << ans << '\n';
    
    return 0;
}
