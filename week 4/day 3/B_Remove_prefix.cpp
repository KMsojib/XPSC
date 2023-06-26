// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     int t;cin>>t;
//     for(;t--;)
//     {
//         int n;cin>>n;
//         map<int,int>mt;
//         int a[n];
//         int ans=0;
//         int len=n;
 
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             mt[a[i]]++;
//         }
//         int it=0;
//         cout<<mt.size()<<endl;
//         while(mt.size()!=len)
//         {
//             ans++;
//             mt[a[it]]--;
//             /*map empty hoye gele then */
//             if(mt[a[it]]==0){
//                 mt.erase(a[it]);
//             }
//             it++;
//             len--;
//         }
//         cout<<ans<<endl;
//     }
 
//     return 0;
// }
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