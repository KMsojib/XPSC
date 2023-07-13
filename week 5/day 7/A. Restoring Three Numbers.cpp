#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int>a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int t;  cin>>t;
    // while (t--)
    // {
    //     /* code */
         solve();
    // }
    
    return 0;
}