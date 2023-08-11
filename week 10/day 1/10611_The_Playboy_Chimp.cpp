/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    while(q--)
    {
        //read(x);
        int x;
        cin>>x;
        auto it1=lower_bound(a.begin(),a.end(),x);
        auto it2=upper_bound(a.begin(),a.end(),x);

        int idx1=it1-a.begin();
        int idx2=it2-a.begin();

        if(idx1 == 0){
            cout<<"X ";
        }
        else{
            cout<<a[idx1-1]<<" ";
        }
        if(idx2 == n){
            cout<<"X"<<endl;
        }
        else{
            cout<<a[idx2]<<endl;
        }
    }
    return 0;
}
