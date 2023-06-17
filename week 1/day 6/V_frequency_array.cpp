#include<bits/stdc++.h>
using namespace std;
const int M=10e5;
int feq[M];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        feq[a[i]]++;
    }
    for(int i=1;i<=m;i++){
        cout<<feq[i]<<endl;
    }
    return 0;
}