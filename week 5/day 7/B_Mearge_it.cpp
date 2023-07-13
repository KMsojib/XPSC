#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    //vector<int>a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        long long x;  cin>>x;
        sum+=x;
    }
    cout<<sum/3<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}