/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>0){
            sort(a.begin(),a.end(),greater<int>());
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else if(sum<0){
            sort(a.begin(),a.end());
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}