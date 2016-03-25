#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;


int main()
{
 
    int n ;
    cin>>n;
    while (n--) {
        int x,a=0,b=0;
        cin>>x;
        int y = 0;
        for (int i = 31; i>-1;i--) {
            if (((1<<i)&x) !=0 ) {
                y++;
            }
            if (y!=0 ) {
                if (((1<<i)&x) !=0) {
                    a++;
                }
                else b++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    
    return 0 ;
}
