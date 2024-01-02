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
        map<int,int>count;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                count[i]++;
                n/=i;
            }
        }
        if(n>1)
        {
            count[n]++;
        }

        for(auto ss:count)
        {
            cout<<ss.first<<" "<<ss.second<<endl;
        }
        cout<<endl;
    }
    return 0;
}