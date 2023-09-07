#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int sum=(k-1)/(n-1);
        floor(sum);
        int T_sum=k+sum;
        cout<<T_sum<<endl;
    }
    return 0;
}