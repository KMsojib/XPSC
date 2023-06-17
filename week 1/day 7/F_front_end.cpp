#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    //cout<<n<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        cout<<a[i]<<" "<<a[n-i-1]<<" ";
    }
    if(n%2!=0){
        cout<<a[n/2];
    }
    return 0;
}