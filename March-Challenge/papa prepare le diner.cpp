#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;

int main()
{
    int t ;
    cin>>t;
    while (t--) {
        
    int n=0 , p=0 , r;
    string s;
    cin>>s>>r;
    int x=0;
    for (int i = 0;i<s.length(); i++) {
        if(x==0 && s[i]!='/') p=p*10+(s[i]-'0');
        if(x!=0) n=n*10+(s[i]-'0');
        if (s[i]== '/') {
            x++ ;
        }
        
    }
    cout<<(int)((3.14*r*r*p)/n )<<endl;
    }
       return 0 ;
}
