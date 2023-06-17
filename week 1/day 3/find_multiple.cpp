//find multiple
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int ans=(b/c)*c;
    if(a<=ans){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}