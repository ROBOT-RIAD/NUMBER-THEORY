#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, int> count;
        for (int k = 0; k < n; k++) {
            int curr = v[k];
            for (int i = 2; i *i<= curr; i++) {
                while (curr % i == 0) {
                    count[i]++;
                    curr /= i;
                }
            }
            if (curr > 1) {
                count[curr]++;
            }
        }
        bool flag = true;
        for (auto ss : count) {
            if (ss.second % n != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}