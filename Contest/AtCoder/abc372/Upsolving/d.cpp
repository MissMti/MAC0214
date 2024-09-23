#include <bits/stdc++.h>

using namespace std;

#define int long long


vector<int> H;
vector<int> rsp(200005);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;
    //cout<<n<<"\n";
    
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        H.push_back(tmp);
    }


    stack<int> st;
    for (int i=n-1; i>= 0; i--) {
        rsp[i] = st.size();
        while(!st.empty() && st.top() < H[i])
            st.pop();
        st.push(H[i]);
    }


    for(int i=0;i<n;i++){
        cout<<rsp[i]<<" ";
    }

    cout<<"\n";
 
    return 0;

}
