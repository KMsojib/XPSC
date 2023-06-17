#include<bits/stdc++.h>
using namespace std;


bool solve(int a,int b)
{
    if((a+b)%2==0){
        return (abs(a-b)%2==0);
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;  cin>>t;
    while(t--)
    {
        int n,m;    cin>>n>>m;
        if(solve(n,m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
