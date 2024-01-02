#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        string contestLog;
        cin >> contestLog; 

        
        bool solved[26] = {false};

       
        for (int i = 0; i < n; ++i) {
            int problemIndex = contestLog[i] - 'A'; 
            solved[problemIndex] = true; 
        }

        int numSolved = 0;
        int ans=0;
        for (int i = 0; i < 26; ++i) {
            if (solved[i]) {
                numSolved+=i+1;
                if(numSolved<=n)
                {
                    ans++;
                }
            }
        }

        cout << ans<< endl;
    }
    return 0;
}