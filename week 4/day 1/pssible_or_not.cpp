#include<bits/stdc++.h>
using namespace std;

/*
5 5
1 2 3 5 13
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if((a[i]&k)==k){
            ans&=a[i];
        }
    }
    if(ans==k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}