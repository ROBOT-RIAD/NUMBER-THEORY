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

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        // sort(b.begin(),b.end());
        int sum=0;
        int i=0;

        while(true)
        {
            sum+=a[i];
            k--;
            if(k==0)
            {
                break;
            }
            sum+=b[i];
            k--;
            if(k==0)
            {
                break;
            }
            i++;
        }
        cout<<sum<<endl;     
    }
    return 0;
}