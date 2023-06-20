#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        string s;cin>>s;
        set<string>st;
        for(int i=0;i<n-1;i++){
            string t;
            t.push_back(s[i]);
            t.push_back(s[i+1]);
            st.insert(t);
        }
        cout<<st.size()<<endl;
    }
    
    return 0;
}