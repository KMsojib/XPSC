#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    int x;    cin>>x;
    bool f=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                f=true;
                break;
            }
        }
    }
    if(f){
        cout<<"will not take number"<<endl;
    }else{
        cout<<"will take number"<<endl;
    }

    return 0;
}