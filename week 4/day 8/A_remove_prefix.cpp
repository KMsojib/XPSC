#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    for(;test--;)
    {
        int n;  cin>>n;
        set<int>st;
        int visited=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            st.insert(a[i]);
            visited++;
            if(visited>st.size())
            {
                break;
            }
        }
        cout<<(n-st.size());
        cout<<endl;
    }
    return 0;
}