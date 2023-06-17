#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    long long m=0;
    for(int i=0;i<k;i++){
        if(a[i]<0){
            break;
        }
        m+=a[i];
    }
    cout<<m<<endl;
    return 0;
}