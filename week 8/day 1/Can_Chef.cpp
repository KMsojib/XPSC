#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

/*
15 km jay 1 ltr ptl
1 kam ---> 1/15
2*50 km ---> 100/15
if(100/15 > 10){NO}
else {YES}

*/
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        if(x*15>=2*y){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}