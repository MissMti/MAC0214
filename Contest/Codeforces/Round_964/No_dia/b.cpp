    #include <bits/stdc++.h>
    using namespace std;
     
    signed main() {
        int t; cin >> t;
     
        for (int i = 0; i < t; i++) {
            int a,b,c,d,rsp=0;
            cin>>a>>b>>c>>d;
            if((a>c && b>d)||(a==c && b>d)||(a>c && b==d)){
                rsp++;
            }
            if((a>d && b>c)||(a==d && b>c)||(a>d && b==c)){
                rsp++;
            }
            if((b>c && a>d)||(b==c && a>d)||(b>c && a==d)){
                rsp++;
            }
            if((b>d && a>c)||(b==d && a>c)||(b>d && a==c)){
                rsp++;
            }
            cout<<rsp<<"\n";
        }
    }
