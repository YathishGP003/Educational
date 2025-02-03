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
    
    if(n == 2 || n ==3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    int v = n % 2 ? 1 : 2;
    while(v <= n) {
        cout << v << ' ';
        v += 2;
    }
 
    v = n % 2 ? 2 : 1;
    while(v <= n) {
        cout << v << ' ';
        v += 2;
    }

    return 0;
}
