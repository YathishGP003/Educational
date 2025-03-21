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
    cin.tie(nullptr);
    
    int tt = nxt();
    while(tt--) {   
        int a = nxt(), b = nxt();
        int max = std::max(a, b);
        int min = std::min(a, b);
 
        if((a + b) % 3 == 0 && max <= 2 * min) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
