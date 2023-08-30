#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=10000000;
    int temp=0;
    int idx=0;
    for(int i=1;i<=100;i++){
        temp=0;
        for(int j=0;j<n;j++){
            int dis=abs(a[j]-i);
            if(dis>=1){
                temp+=dis-1;
            }
        }
        if(temp<ans){
            ans=temp;
            idx=i;
        }
    }
    cout<<idx<<" "<<ans<<endl;
    return 0;
}