#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    bool f=true;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}