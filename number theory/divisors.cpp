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
        vector<int>v;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if((n/i)!=i)
                {
                    v.push_back(n/i);
                }
            }
        }
        for(int ss:v)
        {
            cout<<ss<<" ";
        }
        cout<<endl;       
    }
    return 0;
}