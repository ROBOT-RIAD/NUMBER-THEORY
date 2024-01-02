#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        if(k==0)
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<v[i]<<" ";
            }
        }
        else
        {
            sort(v.begin()+k,v.end(),greater<int>());
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;       
    }
    return 0;
}