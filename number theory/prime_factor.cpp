#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<n;i++)
    {
        int val=v[i];
        map<int,int>count;
        for(int j=2;j*j<=val;j++)
        {
            if(val%j==0)
            {
                while(val%j==0)
                {
                    count[j]++;
                    val/=j;
                }
            }
        }
        if(val>1)
        {
            count[val]++;
        }
        cout<<v[i]<<endl;
        for(auto x:count)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        cout<<endl;
    }
    return 0;
}