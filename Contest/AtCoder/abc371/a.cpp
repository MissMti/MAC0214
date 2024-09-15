#include <bits/stdc++.h>
using namespace std;

#define int long long






signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    char a,b,c;
    cin>>a>>b>>c;

    if(a=='>'){//a>b
        if(b=='>'){//a>b a>c
            if(c=='>'){//a>b a>c b>c a>b>c
                cout<<"B\n";
            }
            else{//a>b a>c b<c a>c>b
                cout<<"C\n";
            }
        }
        else{//a>b a<c c>a>b
            cout<<"A\n";
        }
    }
    else{//a<b
        if(b=='>'){//a<b a>c b>a>c
            cout<<"A\n";
        }
        else{//a<b a<c
            if(c=='>'){//a<b a<c b>c b>c>a
                cout<<"C\n";
            }
            else{//a<b a<c b<c c>b>a
                cout<<"B\n";
            }
        }
    }


    return 0;
}
