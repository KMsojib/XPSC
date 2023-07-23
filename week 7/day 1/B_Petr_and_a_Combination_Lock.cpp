#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)    cin>>a[i];

    bool f=false;
    for(int i=0;i<(1<<n);i++){
        int ans=0;
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                ans+=a[j];
            }else{
                ans-=a[j];
            }
        }
        if(ans%360==0){
            f=true;
            break;
        }
    }
    if(f){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}