#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long l,r; cin>>l>>r;
    cout<<"YES\n";
    for(int i=0;i<(r-l)/2+1;i++){
        cout<<l+i*2<<" "<<l+i*2+1<<endl;
    }
    return 0;
}
/*
0 to (r-l)/2+1
    l + i * 2
    l + i * 2 + 1

    i=0;
        1 2
    i=1
        3 4
    i=3
        5 6
*/