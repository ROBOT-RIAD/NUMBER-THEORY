#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}

ll lcm(ll a,ll b)
{
    return ((a/__gcd(a,b))*b);
}

int main() {
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ans+=((n/a)*p);
    ans+=(n/b)*q;

    ll l=lcm(a,b);
    ll same;
    same=n/l;
    ans-=(same*(p+q));
    ans+=(same*(max(p,q)));
    cout<<ans<<endl;
    return 0;
}