//A Ebony and lvory

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    cin>>a>>b>>c;

    int flag=false;
    for(int i=0;i<=10000;i++){
        for(int j=0;j<=10000;j++){
            if((a*i)+(b*j)==c){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}