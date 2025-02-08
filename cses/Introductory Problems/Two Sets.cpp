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
 
    int sum = n * (n + 1) / 2;
    if(sum & 1) {
        cout << "NO\n";
        return 0;
    }
 
    vector<int> set1, set2;
    cout << "YES\n";
    int mid = sum / 2;
    for(int i = n; i >= 1; i--) {
        if(i <= mid) {
            set1.push_back(i);
            mid = mid - i;
        }
        else {
            set2.push_back(i);
        }
    }
 
    int s1 = set1.size();
    cout << s1 << '\n';
    for(int i = 0; i < s1; i++) {
        cout << set1[i] << ' ';
    }
    cout << '\n';
 
    int s2 = set2.size();
    cout << s2 << '\n';
    for(int i = 0; i < s2; i++) {
        cout << set2[i] << ' ';
    }
    
    cout << '\n';

    return 0;
}
