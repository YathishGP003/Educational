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
    
    int tt = nxt();
    while(tt--) {   
        int x = nxt(), y = nxt();
        int max = std::max(x, y);
        int prev = (max - 1) * (max - 1);
        if((max & 1) ^ 1) {
            if(y >= x) {
                prev += x;
            } 
            else {
                prev += 2 * max - y;
            }
        }
        else {
            if(x >= y) {
                prev += y;
            }
            else {
                prev += 2 * max - x;
            }
        }
        
        cout << prev << '\n';
    }
    
    return 0;
}
