// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define in_range(a,b)    for(int i=a;i<b;i++)
// #define read(x) int x; cin >> x
// int main()
// {
//     fast_io;
//     int t;  cin>>t;
//     while(t--){
//         ll n;  cin>>n;
//         vector<ll>a(n);
        
//         for(ll i=0;i<n;i++){
//             cin>>a[i];
//         }
//         map<ll,ll>mp;
//         int cn=0;
//         for(ll i=0;i<n;i++){
//             for(ll j=i+1;j<n/i;j++){
//                 mp.insert({(a[i]*a[j]),i+1+j+1});
//             }
//         }
//         for(auto it : mp){
//             // cout<<it.first<<" "<<it.second<<endl;
//             if(it.first == it.second){
//                 cn++;
//             }
//         }
//         cout<<cn<<endl;
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

    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int cn=0;
        for(int i=1;i<=n;i++){
            for(int j=(a[i]-i);j<=n;j+=a[i]){
                if(j>=0){
                    if(a[i]*a[j]==i+j){
                        cn++;
                    }
                }
            }
        }
        cout<<cn<<endl;
    }
    
    return 0;
}