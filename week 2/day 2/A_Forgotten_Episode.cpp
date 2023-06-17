#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;  cin>>n;
    long long a[n];
    long long freq[n+1];
    memset(freq,0,sizeof(freq));
 
    for(long long i=1;i<=n-1;i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    for(long long i=1;i<=n;i++){
        if(freq[i]==0){
            cout<<i<<endl;
        }
    }
    return 0;
}