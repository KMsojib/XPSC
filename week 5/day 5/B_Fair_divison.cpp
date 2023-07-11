/*
    Creator:
    Name: MD.Kawsar Mahmud
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;

    int one=0,two=0;
    for(int i=1;i<=n;i++){
        int c;  cin>>c;
        if(c==1){
            one++;
        }else{
            two++;
        }
    }
    if((one+2*two)%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        int sum=(one+two*2)/2;
        if(sum%2==0 or (sum%2==1 and one!=0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int t;  cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}