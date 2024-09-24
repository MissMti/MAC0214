#include <bits/stdc++.h>

using namespace std;

#define int long long


vector<int> H;
vector<int> rsp(200005);


vector<int> check(int n, vector<int> a, int x){
    multiset<int> s;
    for (int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
        
    vector<int> pos;
    for (int i = 0; i < n; i++){
        auto it1 = s.end();
        it1--;
        int y = x - *it1;
        s.erase(it1);
        auto it2 = s.find(y);
        if (it2 == s.end()){
            return {};
        }
        pos.push_back(x - y);
        pos.push_back(y);
        x = max(x - y, y);
        s.erase(it2);
    }
    return pos;
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> a;
        for(int j=0;j<2*n;j++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());

        int tmp=0;
        for (int k = 0; k < 2*n-1; k++){
            int x = a[k] + a[2*n-1];//a parte gulosa é perceber q p tirar tudo a primeira soma tem q ter o maior valor
            //x sempre vai decrescer
            
            vector<int> pos = check(n, a, x);
            if (pos.size()){
                cout << "YES\n";
                cout << x << "\n";
                for (int j = 0; j < n; j++){
                    cout << pos[2*j] << " " << pos[2*j+1] << "\n";
                }
                tmp=1;
                break;
            }
        }
        if(tmp==0){
            cout << "NO\n";
        }
        
    }

 
    return 0;

}

/*
