#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  cin>>t;
    while(t--)
    {
    long long n;  cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    sort(a,a+n);
    for(int i=0;i<n/2;i++)
    {
        sum+=(a[n-i-1]-a[i]);
    }
    cout<<sum<<endl;
    }
    return 0;
}