#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        int a=st.size();
        int b=n;
        int ans=(a*2)+(b-a);
        cout<<ans<<endl;
    }
    return 0;
}