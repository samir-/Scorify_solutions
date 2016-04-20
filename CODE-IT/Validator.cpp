#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long  ll;

int main()
{
    int t ;
    cin>>t;
    while (t--) {
        string s ;
        vector<int> tab ,tab1;
            while(s=="") getline(cin, s);
           // cout<<"*"<<s<<"*"<<endl;
            for(int i=0;i<s.size();i++)
                if (((s[i]>'9')||(s[i]<'0')) && s[i]!='.') s[i]=' ';
            istringstream is(s);
            float tmp ;
            while (is>>tmp) {
                if((int)tmp == tmp  )tab.push_back(tmp);
                
            }
            
        
    
    getline(cin, s);
    for(int i=0;i<s.size();i++)
        if (((s[i]>'9')||(s[i]<'0')) && s[i]!='.') s[i]=' ';
        istringstream is1(s);
        while (is1>>tmp) {
        if((int)tmp == tmp  )tab1.push_back(tmp);
        
    }






        int sol =1 ;

        if(tab.size()!=tab1.size()) sol=0;
        else  {for (int i = 0; i<tab.size(); i++) {
            //cout<<tab[i]<<" "<<tab1[i]<<endl;
            if(tab[i]!=tab1[i]) {sol=0;}
        }
            
        }
        if (sol) {
            cout<<"ACCEPTED"<<endl;
        }
        else cout<<"WRONG ANSWER"<<endl;
        
    }
    
    
    
    
    
    return 0 ;
}
