#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<bool> prime(n+1);
        for(int i=2;i<=n;i++)
        {
            if(!prime[i])
            {
                for(int j=i+i;j<=n;j+=i)
                {
                    prime[j]=true;
                }
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(!prime[i])
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
        
    }
    return 0;
}