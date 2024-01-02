#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

bool is_prime(ll n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)return true;
    if(n%2==0)return false;
    for(ll i=3;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main() {
    int n;cin>>n;
    if(is_prime(n))
    {
        cout<<1<<endl;
    }
    else if(n&1)
    {
        if(is_prime(n-2))
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    else
    {
        cout<<2<<endl;
    }
    
    return 0;
}