#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;  cin>>n;
    long long a[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if((sum-a[i])%2==0){
                cout<<sum-a[i]<<endl;
                return 0;
            }
        }
    }
    return 0;
}