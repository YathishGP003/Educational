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
    
    int n = nxt(), x = nxt();
    
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        p[i] = nxt();
    }
    
    std::sort(all(p));
 
    int left = 0, right = n - 1;
    int done = 0;
    while(left < right) {
        if(p[left] + p[right] <= x){
            done++, left++;
        }
        right--;
    }
    
    cout << n - done << '\n';
    
    return 0;
}
