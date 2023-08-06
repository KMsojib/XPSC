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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a.resize(unique(a.begin(), a.end()) - a.begin());
        n=(int)a.size();
        int cn=0;
        for(int i=0;i<n;i++){
            if(i==0 or i==n-1 or(a[i]>a[i-1] and a[i]>a[i+1]) or (a[i]<a[i-1] and a[i]<a[i+1])){
                cn++;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}