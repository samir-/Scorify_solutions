#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;
typedef long long  ll;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
    
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
    
    return gcd;
}

int main()
{
    int n ;
    cin>>n;
    string s;
    while (cin>>s) {
        for(int i = 0 ; i<s.length() ; i++){
            if (s[i]=='@') {
                cout<<s<<endl;
            }
        }
    }
    return 0 ;
}
