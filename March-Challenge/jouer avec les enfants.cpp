#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;

ll dp[1001][10001];

int main()
{
	
    memset(dp, 0, sizeof(dp));
    dp[1][0]=1;
    dp[2][0]=1;
    dp[2][1]=1;
    int y =0 ;
    for (int i = 3; i<1001; i++) {
        dp[i][0] = 1;
        for (int j = 1 ; j<10001;j++) {
            dp[i][j]=dp[i][j-1]+dp[i-1][j];
            if(j-i>=0) dp[i][j]-=dp[i-1][j-i];
            dp[i][j] = (dp[i][j]+1000000007)%1000000007;
            
        }
    }
    
    
    
    
    int t ;
    cin>>t;
    while (t--) {
        ll s , n ;
        cin>>n>>s;
        cout<<dp[n][s]<<endl;
        
    }
    return 0 ;
}
